//
// Created by lxd on 17/3/3.
//

#include "Fragments.h"
#include "Child.h"
#include "Parent.h"

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
            delete[] pT[i];
        }
        delete[] pT;
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
    int numRows = 6, numColumns = 6;

    cout << "########### test2DArray Start ###########" << endl;
    cout << "rows = " << numRows << ", columns = " << numColumns << endl;

    new2DArray(p, numRows, numColumns);
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numColumns; j++) {
            p[i][j] = i + j;
        }
    }

    dump2DArray(p, numRows, numColumns);

    delete2DArray(p, numRows, numColumns);

    cout << "########### test2DArray End ###########" << endl;
}

template<class T>
void Fragments::new2DArray1(T **&pT, int numRows, int *rowSize) {


    try {
        pT = new T *[numRows];
        for (int i = 0; i < numRows; i++) {
            int numColumns = rowSize[i];
            pT[i] = new T[numColumns];
        }
    } catch (bad_alloc) {
        throw "new2DArray1:Failed to allocate memory";
    }

}

template<class T>
void Fragments::delete2DArray1(T **&pT, int numRows, int *rowSize) {

    if (pT) {
        for (int i = 0; i < numRows; i++) {
            delete[] pT[i];
        }
        delete[] pT;
    }
}

void Fragments::test2DArray1() {

    double **p;
    int numRows = 6;
    int columnNums[6];


    cout << "########### test2DArray1 Start ###########" << endl;
    cout << " rows = " << numRows << endl;

    for (int i = 0; i < numRows; i++) {
        columnNums[i] = numRows + i;
    }

    new2DArray1(p, numRows, columnNums);

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < columnNums[i]; j++) {
            p[i][j] = (char) (i + j + 49);
            cout << "    " << p[i][j];
        }
        cout << endl;
    }

    delete2DArray1(p, numRows, columnNums);
    cout << "########### test2DArray1 End ###########" << endl;

}

template<class T>
T *Fragments::changeLength1D(T *&p, int oldLength, int newLength) {

    if (!p) {
        return nullptr;
    }

    if (newLength == oldLength) {
        return p;
    }

    if (newLength < oldLength) {
        p[newLength] = '\0';
        return p;
    }

    if (newLength > oldLength) {
        T *tmpPt = new T[newLength];
        //memset(tmpPt, 0, newLength);
        if (tmpPt) {
            // 第三个参数是oldLength * sizeof(T)
            memcpy(tmpPt, p, oldLength * sizeof(T));
            cout << "DEBUG tmpPt[3]=" << tmpPt[3] << endl;
            // 第三个参数是(newLength - oldLength) * sizeof(T)
            memset(tmpPt + oldLength, 0, (newLength - oldLength) * sizeof(T));
            return tmpPt;

        } else {
            std::cout << "Fail to new " << std::endl;
            return nullptr;
        }
    }
}

void Fragments::testChangeLength1D() {
    int newLength = 20, oldLength = 5;

    cout << "########### testChangeLength1D Start ###########" << endl;
    cout << "newLength=" << newLength << ",oldLength=" << oldLength << endl;

    int *a = new int[oldLength];
    for (int i = 0; i < oldLength; i++) {
        a[i] = i + 1;
    }

    int *newPt = changeLength1D(a, oldLength, newLength);

    for (int i = 0; i < newLength; i++) {
        cout << " " << newPt[i] << ",";
    }
    cout << endl;
    delete[]a;
    delete[]newPt;
    cout << "########### testChangeLength1D End ###########" << endl;

}

void Fragments::testIntance() {

    Parent* p = Child::getInstance();
    p->releas();
}




