#ifndef TESTCPP_MYVECTOR_H
#define TESTCPP_MYVECTOR_H

#include <fstream>
#include <cmath>

const size_t N = 3; // размер вектора

typedef double baseType; // Базовый тип вектора
typedef baseType vectorType[N]; // Тип - "вектор"

// Возвращает модуль вектора v
baseType getModulus(vectorType v){
    baseType sum = 0;

    for (size_t i = 0; i < N; ++i)
        sum += pow(v[i], 2);

    return sqrt(sum);
}

// Считывает вектор v с клавиатуры
void inputVector(vectorType v){
    for (size_t i = 0; i < N; ++i)
        std::cin >> v[i];
}

// Выводит вектор v на экран
void printVector(vectorType v){
    for (size_t i = 0; i < N; ++i)
        std::cout << v[i] << " ";

    std::cout << std::endl;
}

// Меняет местами векторы на позициях pos1 и pos2 в файле f
void swapVectorsInFile(size_t pos1, size_t pos2, std::fstream &f){
    vectorType temp1;
    vectorType temp2;

    // Чтение вектора с первой позиции
    f.seekg(pos1, std::ios::beg);
    f.read((char *)&temp1, sizeof temp1);

    // Чтение вектора со второй позиции
    f.seekg(pos2, std::ios::beg);
    f.read((char*)&temp2, sizeof temp2);

    // Запиcь первого вектора на место второго
    f.seekg(pos2, std::ios::beg);
    f.write((char*)&temp1, sizeof temp1);

    // Запись второго вектора на место первого
    f.seekg(pos1, std::ios::beg);
    f.write((char*)&temp2, sizeof temp2);
}

#endif //TESTCPP_MYVECTOR_H
