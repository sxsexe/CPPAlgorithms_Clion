//
// Created by ll on 17-4-2.
//

#include "Core2048.h"

#include <time.h>
#include <iostream>

using namespace std;

void Core2048::handleInputEvent(ActionDirection direction) {


}

void Core2048::beginProcess() {

}

void Core2048::endProcess() {

}

void Core2048::initData() {

    for (int i = 0; i < ROW_MAX; i++) {
        for (int k = 0; k < COLUMN_MAX; k++) {
            CardData *tmpP = new CardData(i, k);
            tmpP->genUniqueName();
            mOriginData[i][k] = tmpP;
        }
    }

    this->generateRandom(INIT_GEN_COUNT);
    this->dumpResult();

}

void Core2048::generateRandom(int count) {
    for(int i = 0; i < count; i++) {
        //find all empty space and collect them
        std::vector<CardData *> indexes;
        this->findAllEmptyPosition(indexes);
        //generate random index
        int findResult = this->generateRandomIndex(indexes);
        //generate random value
        int value = this->generateRandowmValue();

        CardData * cardData = indexes[findResult];
        cardData->mValue = value;

        cout << "generateRandom loop=" << i;
        cardData->dumpCard();
    }

}

void Core2048::findAllEmptyPosition(std::vector<CardData *> &emptyIndexs) {

    for (int i = 0; i < ROW_MAX; i++) {
        for (int k = 0; k < COLUMN_MAX; k++) {
            if (mOriginData[i][k]->mValue == 0) {
                emptyIndexs.push_back(mOriginData[i][k]);
            }
        }
    }

}

int Core2048::generateRandomIndex(std::vector<CardData *> indexes) {

    srand((unsigned) time(NULL));
    int result = -1;
    if (!indexes.empty()) {
        result = rand() % (indexes.size());
    }
    cout << "generateRandomIndex find=" << result << endl;
    return result;

}

int Core2048::generateRandowmValue() {

    srand((unsigned) time(NULL));
    int seeds[2] = {2, 4};
    return seeds[rand() % 2];

}



void Core2048::processEachLine() {


}


void Core2048::dumpResult() {
#ifdef DEBUG

    cout << "DUMP Core Data [Begin]" << endl;

    for (int i = 0; i < ROW_MAX; i++) {
        for (int k = 0; k < COLUMN_MAX; k++) {
            cout << "\t" << mOriginData[i][k]->mValue;
        }
        cout << endl;
    }
    cout << "DUMP Core Data [End]" << endl;
#endif


}
