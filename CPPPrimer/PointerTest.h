//
// Created by lxd on 17/3/17.
//

#ifndef CPP_ALGORITHM_POINTERTEST_H
#define CPP_ALGORITHM_POINTERTEST_H

#include "Screen.h"
#include <iostream>
#include <memory>

#include "StrBlob.h"

class PointerTest {

public:

    static void testPointer();

    static void testStrBlob();

private:

    static std::shared_ptr<Screen> factroy_ptr() {
        std::shared_ptr<Screen> p1 = std::make_shared<Screen>();
        std::shared_ptr<Screen> p = std::make_shared<Screen>();
        std::cout << "factroy_ptr p1.count" << p1.use_count()<< std::endl;
        p1 = p;
        std::cout << "factroy_ptr p.count" << p.use_count() << ",p="<< p << std::endl;
        return p;
    }

};


#endif //CPP_ALGORITHM_POINTERTEST_H
