//
// Created by lxd on 17/3/7.
//

#ifndef CPP_ALGORITHM_CHILD_H
#define CPP_ALGORITHM_CHILD_H

#include "Parent.h"

class Child :public Parent{

public:
    static Parent * getInstance();
    Child();
    ~Child();

    void releas();

};


#endif //CPP_ALGORITHM_CHILD_H
