//
// Created by lxd on 17/3/6.
//

#include "ArrayTest.h"
#include <iostream>
#include <stdlib.h>
#include <cstddef>

using namespace std;

void ArrayTest::test1() {


    size_t t = 5;

    int a[5] = {2, 2, 2};

    cout << "a[2]=" << a[2] << endl;

    int (*pArray)[5] = &a;
    printf("a=%p, &a=%p \n", a, &a);
    cout << "a=" << a << ",&a=" << &a << endl;
    cout << ",*pArray=" << (*pArray) << ",pArray=" << pArray << endl;

    (*pArray)[2] = 3;
    cout << "a[2]=" << a[2] << endl;
}
