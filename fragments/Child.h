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
    /**
     *声明default后，强制编译器自动生成一个默认构造函数，不需要再自行定义；如果自行定义了会报错
     * definition of explicitly defaulted default constructor
     */
    //Child() = default;

    /*explicit*/ Child(int num);

    ~Child();

    void releas() override ;

};


#endif //CPP_ALGORITHM_CHILD_H
