#include <iostream>
#include "myVector.h"

using namespace std;

struct afterProcessingFileInfo {
    baseType maxModulus = 0;
    size_t fileLen = 0;
};

// Выводит на экран все векторы из файла filename
void printVectorsInFile(const string &filename) {
    ifstream in(filename, ios::in | ios::binary);

    vectorType v;

    while (in.read((char *) &v, sizeof v))
        printVector(v);

    in.close();
}

/* Обрабатывает файл filename, возвращает структуру, которая хранит кол-во
 * векторов в файле и наибольший модуль вектора */
afterProcessingFileInfo findMaxModulusAndFileLen(const string& filename) {
    afterProcessingFileInfo res;

    ifstream f (filename, ios::binary|ios::in);
    vectorType v;

    while (f.read((char *) &v, sizeof v)) {
        res.fileLen++;

        baseType modulus = getModulus(v);
        if (modulus > res.maxModulus)
            res.maxModulus = modulus;
    }
    f.close();

    return res;
}

// Считывает вектор v, c позиции pos, из файла f
void readVectorFromPos(vectorType *v, size_t pos, fstream &f){
    f.seekg(pos, ios_base::beg);
    f.read((char *)v, sizeof (*v));
    f.seekg(pos, ios_base::beg);
}

// Перемещает векторы с максимальным модулем в файле filename в конец файла
void moveMaxModulusVectorsToEndFile(const string &filename) {

    afterProcessingFileInfo data = findMaxModulusAndFileLen(filename);

    fstream f(filename, fstream::in | fstream::out | fstream::binary);

    if (!f.is_open())
        throw runtime_error("error opening file!");

    vectorType v;

    // позиция первого вектора с конца файла с немаксимальным модулем
    size_t notMaxPos = (data.fileLen - 1) * sizeof(v);
    // позиция первого вектора с начала файла с максимальным модулем
    size_t maxPos = 0;

    while (true){

//        bool flag;
//        do {
//            flag = false;
//            readVectorFromPos(&v, maxPos, f);
//            if (getModulus(v) != data.maxModulus){
//                maxPos += sizeof v;
//                flag = true;
//            }
//        } while (flag);

        // Поиск первого вектора с максимальным модулем начиная с позиции maxPos
        findFirstMax:
        readVectorFromPos(&v, maxPos, f);
        if (getModulus(v) != data.maxModulus){
            maxPos += sizeof v;
            goto findFirstMax;
        }

        // Поиск первого вектора с немаксимальным модулем начиная с позиции notMaxPos
        findFirstNotMax:
        readVectorFromPos(&v, notMaxPos, f);
        if (getModulus(v) == data.maxModulus){
            notMaxPos -= sizeof v;
            goto findFirstNotMax;
        }

        // Все векторы с максимальным модулем уже в конце
        if (maxPos >= notMaxPos)
            break;

        swapVectorsInFile(maxPos, notMaxPos, f);
    }

    f.close();
}

int main() {
    string filename;
    cout << "Input name of file with vectors:";
    cin >> filename;

    cout << "Content of file before processing:" << endl;
    printVectorsInFile(filename);

    moveMaxModulusVectorsToEndFile(filename);

    cout << "Content of file after processing:" << endl;

    printVectorsInFile(filename);
}