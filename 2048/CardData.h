//
// Created by ll on 17-4-2.
//

#ifndef CPP_ALGORITHM_CARDDATA_H
#define CPP_ALGORITHM_CARDDATA_H


#include <string>
#include <sstream>
#include <iostream>

class CardData {

public:

    CardData(int rowIndex, int columnIndex) : mValue(0), mRowIndex(rowIndex), mColumnIndex(columnIndex){}
    CardData():mValue(0), mRowIndex(-1), mColumnIndex(-1){}
    ~CardData(){};

    int mValue;
    int mRowIndex;
    int mColumnIndex;

    std::string mUniqueName;

    void genUniqueName() {
        std::stringstream ss1;
        std::stringstream ss2;
        std::string str1;
        std::string str2;
        ss1 << mRowIndex;
        ss2 << mColumnIndex;
        ss1 >> str1;
        ss2 >> str2;
        mUniqueName = str1 + "_" + str2;
    }

    void dumpCard() {
        std::cout << "Card, i=" << mRowIndex << ",j="<<mColumnIndex<<",value="<<mValue<<std::endl;
    }

};


#endif //CPP_ALGORITHM_CARDDATA_H
