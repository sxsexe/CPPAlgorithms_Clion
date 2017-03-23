//
// Created by lxd on 17/3/23.
//

#include "TimeUtil.h"

long TimeUtil::currentTimeMillis() {

    struct timeval time;
    gettimeofday(&time, NULL);
    return time.tv_sec * 1000 + time.tv_usec / 1000;

}