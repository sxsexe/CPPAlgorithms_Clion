//
// Created by lxd on 17/3/7.
//

#include "Child.h"

#include <iostream>

using namespace std;
static Child * sIntance = nullptr;
Child::Child() {
    cout << "new Child" << endl;
    this->name = "Child";
}

Child::Child(int num) {
    cout << "new Child num=" << num << endl;
}

Child::~Child() {
    cout << "~Child" << endl;
}

void Child::release() {
    this->a = 200;
    cout << "Child release a=" << a << endl;
    cout << "Child release name=" << this->name << endl;
    Parent::release();//显式调用父类的方法，相当于super.xxx()
    cout << "Parent release name=" << Parent::name << endl;
    cout << "Parent release a=" << Parent::a << endl;
    delete sIntance;
    sIntance = nullptr;
}


Parent* Child::getInstance() {
    if(sIntance == nullptr) {
        sIntance = new Child();
    }
    return sIntance;
}