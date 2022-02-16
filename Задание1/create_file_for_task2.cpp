#include <iostream>
#include "myVector.h"

using namespace std;

int main(){

    string filename;
    cout << "Input file name:";
    cin >> filename;

    size_t vectorsCnt;
    cout << "Input count of vectors:";
    cin >> vectorsCnt;

    ofstream out (filename, ios::binary|ios::out);

    cout << "Input vectors" << endl;
    for (size_t i = 0; i < vectorsCnt; ++i) {
        vectorType v;
        inputVector(v);
        out.write((char*)&v,sizeof v);
    }
    out.close();

    cout << "Vectors successfully written.";
}