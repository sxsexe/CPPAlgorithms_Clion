//
// Created by lxd on 17/3/17.
//

#include "PointerTest.h"
#include <memory>
#include <iostream>

using namespace std;


void PointerTest::testPointer() {

    //此时p1为空指针
    std::shared_ptr<string> p1;
    cout << "p1->empty=" << p1 << endl;

    if(p1 && p1->empty()) {
        *p1 = "Hi";
        cout << "*p1=" << *p1 << endl;
    }

    p1 = make_shared<string>(10, '9');
    cout << "*p1=" << *p1 << ",p1.use_count=" << p1.use_count() << endl;
    {
        auto p2(p1);
        cout << "p1=" << p1 << ",p1.use_count=" << p1.use_count() << endl;
        cout << "p2=" << p2 << ",p2.use_count=" << p2.use_count() << endl;

        auto p3 = p1;
        cout << "p1=" << p1 << ",p1.use_count=" << p1.use_count() << endl;
        cout << "p2=" << p2 << ",p2.use_count=" << p2.use_count() << endl;
        cout << "p3=" << p3 << ",p3.use_count=" << p3.use_count() << endl;
    }


    std::shared_ptr<string> q;

    q = p1;
    cout << "p1=" << p1 << ",p1.use_count=" << p1.use_count() << endl;
    cout << "q=" << q << ",q.use_count=" << q.use_count() << endl;

    auto r = make_shared<string>(3, '2');
    cout << "r=" << r << ",r.use_count=" << r.use_count() << endl;
    r = q;
    cout << "r=" << r << ",r.use_count=" << r.use_count() << endl;
    cout << "q=" << q << ",q.use_count=" << q.use_count() << endl;



    std::shared_ptr<Screen> pp = factroy_ptr();
    cout << "pp=" << pp << ",pp.use_count=" << pp.use_count() << endl;

}

