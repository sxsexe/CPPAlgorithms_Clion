//
// Created by Administrator on 2017/4/2 0002.
//

#ifndef CPP_ALGORITHM_SCORE_H
#define CPP_ALGORITHM_SCORE_H


#include <cmath>

class Score {

public:

    Score() : mScore(0) {}

    long currentScroe() {
        return mScore;
    }

    void score(int value) {

        if (value <= pow(2, 10)) {
            mScore += 100;
        } else if (value <= pow(2, 20)) {
            mScore += 1000;
        } else {
            mScore += 10000;
        }

    }

private:
    long mScore;

};


#endif //CPP_ALGORITHM_SCORE_H
