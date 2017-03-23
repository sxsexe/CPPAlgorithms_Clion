//
// Created by lxd on 17/3/23.
//

#ifndef CPP_ALGORITHM_POINT_H
#define CPP_ALGORITHM_POINT_H


#include <iostream>
#include <string>

using namespace std;

class Point {

public:

    Point(std::string & name) {
        cout << "new Point name=" << name << endl;
        this->name = name;
    }

    Point() {
        cout << "new Point" << endl;
    }

    Point(Point & rp) {
        cout << "copy p name=" << rp.name <<endl;
    }

    Point& operator=(Point & rp) {
        cout << "copy= p name=" << rp.name <<endl;
        return *this;
    }

    ~Point() {
        cout << "~Point" <<endl;
    }


    std::string name;

};


#endif //CPP_ALGORITHM_POINT_H
