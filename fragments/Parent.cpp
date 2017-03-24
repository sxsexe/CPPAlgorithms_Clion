//
// Created by lxd on 17/3/7.
//

#include "Parent.h"
#include <iostream>

using namespace std;

Parent::Parent() {

    cout << "new Parent" << endl;
}

Parent::~Parent() {
    cout << "~ Parent" << endl;
}

void Parent::release() {
    cout << "Parent release a=" << &a << endl;
}