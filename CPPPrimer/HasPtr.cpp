//
// Created by lxd on 17/3/24.
//

#include "HasPtr.h"

void HasPtr::test() {

    HasPtr p1, p2("p2");

    p1.dumpInnerInfo();
    p2.dumpInnerInfo();

    p1 = p2;

    HasPtr p3(p2);

    p1.dumpInnerInfo();
    p2.dumpInnerInfo();


}
