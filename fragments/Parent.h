//
// Created by lxd on 17/3/7.
//

#ifndef CPP_ALGORITHM_PARENT_H
#define CPP_ALGORITHM_PARENT_H

#include <iostream>
#include <string>

class Parent {

public:
    Parent();
    virtual ~Parent();

    virtual void release();

    int a = 100;

private:
    double price = 1.0;

protected:

    std::string name = std::string("Parent");

};


#endif //CPP_ALGORITHM_PARENT_H
