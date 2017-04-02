//
// Created by ll on 17-4-2.
//

#ifndef CPP_ALGORITHM_CORE2048_H
#define CPP_ALGORITHM_CORE2048_H

#include <iostream>
#include <vector>
#include "LineIntent.h"
#include "CardData.h"
#include "Score.h"

#define  COLUMN_MAX 4
#define  ROW_MAX    4

#define  MAX_COUNT (COLUMN_MAX) * (ROW_MAX)

#define  INIT_GEN_COUNT 10
#define  STACK_COUNT 10

#define DEBUG ON

typedef enum {
    ACTION_NULL, ACTION_UP, ACTION_DOWN, ACTION_LEFT, ACTION_RIGHT
} ActionDirection;

class Core2048 {

public:

    Core2048() = default;

    ~Core2048();


    void initData();

    void handleInputEvent(ActionDirection direction);

    void dumpResult();

    void beginProcess();

    void endProcess();

    void quit();


private:

    //original data
    CardData *mOriginData[ROW_MAX][COLUMN_MAX];

    std::vector<LineIntent> lineIntents;

    ActionDirection mDirection = ACTION_NULL;

    bool mIsProcessing = false;

    int mStepCount = 0;
    Score score;
    int mStack[STACK_COUNT][ROW_MAX][COLUMN_MAX];
    int mStackIndex = -1;

    /**
     * vector{0, 1...}
     */
    void handleActionUp();

    /**
     * vector{MAX, MAX-1...}
     */
    void handleActionDown();

    /**
     * vector{MAX, MAX-1...}
     */
    void handleActionRight();

    /**
     * vector{0, 1...}
     */
    void handleActionLeft();

    /**
     *
     * @param line 不论哪个方向，都搞成一个vector且顺序按照各个方向处理
     */
    void processEachLine(std::vector<CardData *> &line);


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
    void findAllEmptyPosition(std::vector<CardData *> &emptyIndexs);

    /**
     * 生成一个随即的值，2或者4
     * @return
     */
    int generateRandomValue();

    /**
     * 查找随即空位置 并生成随即值
     * @param count LOOP
     */
    void generateRandom(int count);

    bool checkIfEmptySpace() {
        for (int i = 0; i < ROW_MAX; i++) {
            for (int k = 0; k < COLUMN_MAX; k++) {
                if (mOriginData[i][k]->mValue == 0) {
                    return true;
                }
            }
        }
        return false;
    }


};


#endif //CPP_ALGORITHM_CORE2048_H
