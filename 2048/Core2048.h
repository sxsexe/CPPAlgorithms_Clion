//
// Created by ll on 17-4-2.
//

#ifndef CPP_ALGORITHM_CORE2048_H
#define CPP_ALGORITHM_CORE2048_H

#include <iostream>
#include <vector>
#include "LineIntent.h"
#include "CardData.h"

#define  COLUMN_MAX 4
#define  ROW_MAX    4

#define  INIT_GEN_COUNT 2

class Core2048 {

    typedef enum{ACTION_UP, ACTION_DOWN, ACTION_LEFT, ACTION_RIGHT} ActionDirection;

public:

    Core2048() = default;
    ~Core2048();


    void initData();

    void handleInputEvent(ActionDirection direction);

    void dumpResult();

    void beginProcess();

    void endProcess();


private:

    //original data
    CardData* mOriginData[ROW_MAX][COLUMN_MAX];

    std::vector<LineIntent> lineIntents;

    ActionDirection mDirection;

    bool mIsProcessing = false;

    void processEachLine();

    void generateRandom();

    CardData* findEmptyPosition();




};


#endif //CPP_ALGORITHM_CORE2048_H
