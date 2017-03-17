//
// Created by lxd on 17/3/7.
//

#include "Child.h"

#include <iostream>

using namespace std;
static Child * sIntance = nullptr;
Child::Child() {
    cout << "new Child" << endl;
}

Child::Child(int num) {
    cout << "new Child num=" << num << endl;
}

Child::~Child() {
    cout << "~Child" << endl;
}

void Child::releas() {
    this->a = 200;
    cout << "Child releas a=" << &a << endl;
    Parent::releas();//显式调用父类的方法，相当于super.xxx()
    delete sIntance;
    sIntance = nullptr;
}


Parent* Child::getInstance() {
    if(sIntance == nullptr) {
        sIntance = new Child();
    }
    return sIntance;
}