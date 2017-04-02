//
// Created by ll on 17-4-2.
//

#include "Core2048.h"

using namespace std;

void Core2048::handleInputEvent(ActionDirection direction) {
    if (this->mIsProcessing) {
        cout << "Processing" << endl;
        return;
    }
    this->mDirection = direction;

    this->beginProcess();

    this->endProcess();
}

void Core2048::beginProcess() {
    this->mIsProcessing = true;
    switch (this->mDirection) {
        case ACTION_DOWN:
            this->handleActionDown();
            break;
        case ACTION_UP:
            this->handleActionUp();
            break;
        case ACTION_LEFT:
            this->handleActionLeft();
            break;
        case ACTION_RIGHT:
            this->handleActionRight();
            break;
        default:
            cout << "should never run here" << endl;
            break;
    }
}

void Core2048::endProcess() {
    this->mIsProcessing = false;
}

void Core2048::handleActionUp() {
    std::vector<CardData *> line;
    for (int i = 0; i < COLUMN_MAX; i++) {
        line.clear();
        for (int k = 0; k < ROW_MAX; k++) {
            //将这一条线上的数据放到vector中
            line.push_back(mOriginData[k][i]);
        }
        this->processEachLine(line);
    }
}

void Core2048::handleActionDown() {
    std::vector<CardData *> line;
    for (int i = 0; i < COLUMN_MAX; i++) {
        line.clear();
        for (int k = (ROW_MAX - 1); k >= 0; k--) {
            //将这一条线上的数据放到vector中
            line.push_back(mOriginData[k][i]);
        }
        this->processEachLine(line);
    }
}

void Core2048::handleActionRight() {
    std::vector<CardData *> line;
    for (int i = 0; i < ROW_MAX; i++) {
        line.clear();
        for (int k = (COLUMN_MAX - 1); k >=0; k--) {
            //将这一条线上的数据放到vector中
            line.push_back(mOriginData[i][k]);
        }
        this->processEachLine(line);
    }
}

void Core2048::handleActionLeft() {
    std::vector<CardData *> line;
    for (int i = 0; i < ROW_MAX; i++) {
        line.clear();
        for (int k = 0; k < COLUMN_MAX; k++) {
            //将这一条线上的数据放到vector中
            line.push_back(mOriginData[i][k]);
        }
        this->processEachLine(line);
    }
}


void Core2048::processEachLine(std::vector<CardData *> &line) {
    // 先找到第一个不是0的位置，然后继续找后边的value，如果后边找到非0且与前边的相同则加到前边，
    // 否则置于其后
    cout << "processEachLine [begin]" << endl;
    auto itBegin = line.begin();
    auto itEnd = line.end();
    while (itBegin != itEnd) {
        CardData *cardData = *itBegin++;
        cardData->dumpCard();
    }
    cout << "processEachLine [end]" << endl;

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

    srand((unsigned) time(NULL));

    for (int i = 0; i < count; i++) {
        //find all empty space and collect them
        std::vector<CardData *> indexes;
        this->findAllEmptyPosition(indexes);
        //generate random index
        int findResult = this->generateRandomIndex(indexes);
        //generate random value
        int value = this->generateRandomValue();

        CardData *cardData = indexes[findResult];
        if(cardData->mValue != 0) {
            cout << "Error, CardData is not Empty " << endl;
        }
        cardData->mValue = value;

//        cout << "generateRandom loop=" << i << ", ";
//        cardData->dumpCard();
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

    int result = -1;
    if (!indexes.empty()) {
        result = rand() % (indexes.size());
    }
//    cout << "generateRandomIndex find=" << result << endl;
    return result;

}

int Core2048::generateRandomValue() {


    int seeds[2] = {2, 4};
    return seeds[rand() % 2];

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
