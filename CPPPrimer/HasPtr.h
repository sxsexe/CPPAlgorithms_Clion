//
// Created by lxd on 17/3/24.
//

#ifndef CPP_ALGORITHM_HASPTR_H
#define CPP_ALGORITHM_HASPTR_H


#include <string>
#include <iostream>

using namespace std;

class HasPtr {

public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {
        cout << "new HasPtr" << endl;
    }

    HasPtr(HasPtr &rp) {
        cout << "Copy HasPtr" << endl;
        if (this == &rp) {
            return;
        }

        string *tmp = ps;
        ps = new string(*rp.ps);
        this->i = rp.i;
        delete tmp;
    }

    HasPtr &operator=(HasPtr &rp) {
        cout << "HasPtr operator=" << endl;
        if (this == &rp) {
            return *this;
        } else {
            string *tmp = ps;
            ps = new string(*rp.ps);
            this->i = rp.i;
            delete tmp;
            return *this;
        }

    }

    ~HasPtr() {
        cout << "~HasPtr" << endl;
        delete ps;
    }

    void dumpInnerInfo() {
        cout << "this=" << this << endl;
        cout << "this->ps=" << this->ps << ", *(this->ps)=" << *(this->ps) << endl;
    }

    static void test();


private:

    std::string *ps;

    int i;

};


#endif //CPP_ALGORITHM_HASPTR_H
