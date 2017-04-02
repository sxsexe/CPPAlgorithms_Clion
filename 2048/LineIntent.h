//
// Created by ll on 17-4-2.
//

#ifndef CPP_ALGORITHM_LINEINTENT_H
#define CPP_ALGORITHM_LINEINTENT_H

#include "CardData.h"
#include <map>

class LineIntent {

public:

    LineIntent()= default;
    ~LineIntent(){};

    void add(CardData* src, CardData* dest);

    void clear();

    void dump();


private:

    std::map<CardData, CardData*> mMovePair;

};


#endif //CPP_ALGORITHM_LINEINTENT_H
