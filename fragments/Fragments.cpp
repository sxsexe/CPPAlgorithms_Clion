//
// Created by lxd on 17/3/3.
//

#include "Fragments.h"

#include <iostream>

using namespace std;

template<class T>
void Fragments::new2DArray(T **&pT, int numRows, int numColumns) {

    try {
        pT = new T *[numRows];
        for (int i = 0; i < numRows; i++) {
            pT[i] = new T[numColumns];
        }
    } catch (bad_alloc) {
        throw "make2DArray:Failed to allocate memory";
    }

}

template<class T>
void Fragments::delete2DArray(T **&pT, int numRows, int numColumns) {
    if (pT) {
        for (int i = 0; i < numRows; i++) {
            delete[]pT[i];
        }
        delete[]pT;
        pT = nullptr;
    }

}

template<class T>
void Fragments::dump2DArray(T **&pT, int numRows, int numColumns) {
    if (pT) {
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numColumns; j++) {
               cout << "   " << pT[i][j];
            }
            cout << endl;
        }
    }
}


void Fragments::test2DArray() {

    int **p;
    int numRows = 3, numColumns = 3;

    new2DArray(p, numRows, numColumns);
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numColumns; j++) {
            p[i][j] = i + j;
        }
    }

    dump2DArray(p, numRows, numColumns);

    delete2DArray(p, numRows, numColumns);
}