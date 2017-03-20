//
// Created by lxd on 17/3/17.
//

#include "PointerTest.h"
#include <memory>
#include <iostream>

using namespace std;


void PointerTest::testStrBlob() {

    StrBlob b1;
    StrBlob b2 = {"a", "an", "the"};
    b1 = b2;

    b2.push_back("about");

    b1.dumpData();

    StrBlob *b = new StrBlob();
    delete b;

    cout << "testStrBlob over" << endl;

    cout<<" typeid(size_t).name() = "<<typeid(size_t).name()<<endl;
    cout<<" typeid(vector<int>::size_type).name() = "<<typeid(vector<int>::size_type).name()<<endl;

}

void PointerTest::testPointer() {

    //此时p1为空指针
    std::shared_ptr<string> p1;
    cout << "p1->empty=" << p1 << endl;

    if (p1 && p1->empty()) {
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

