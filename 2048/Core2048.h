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

#define  MAX_COUNT (COLUMN_MAX) * (ROW_MAX)

#define  INIT_GEN_COUNT 2

#define DEBUG ON

typedef enum{ACTION_UP, ACTION_DOWN, ACTION_LEFT, ACTION_RIGHT} ActionDirection;

class Core2048 {

public:

    Core2048() = default;
    ~Core2048() = default;


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


    /**
     * 根据所有的空的位置，随即选择一个
     * @param emptyIndexs
     * @return
     */
    int generateRandomIndex(std::vector<CardData *> emptyIndexs);

    /**
     * 查找所有的空位置
     * @param emptyIndexs
     */
    void findAllEmptyPosition(std::vector<CardData *>& emptyIndexs);

    /**
     * 生成一个随即的值，2或者4
     * @return
     */
    int generateRandowmValue();

    /**
     * 查找随即空位置 并生成随即值
     * @param count LOOP
     */
    void generateRandom(int count);




};


#endif //CPP_ALGORITHM_CORE2048_H
