//
// Created by lxd on 17/3/23.
//

#ifndef CPP_ALGORITHM_CLASSTESTDEMO_H
#define CPP_ALGORITHM_CLASSTESTDEMO_H

#include "Point.h"
#include "../fragments/Parent.h"
#include "../fragments/Child.h"

class ClassTestDemo {

public:

    static Point test(Point arg) {
        //传递实参对象，会引发一次拷贝构造
        cout << "11" << endl;
        std::string str("Heap");
        Point local, *heap = new Point(str);

        cout << "22" << endl;
        *heap = local;//向已有对象赋值不会引发拷贝构造,但是会引发赋值运算符拷贝
        Point p2(local);//向未初始化对象赋值会引发拷贝构造

        cout << "33" << endl;

        Point pa[4] = {local, *heap};//此处会引发两次拷贝构造，两个new

        cout << "55" << endl;

        //返回实参对象，引发一次拷贝构造
        return *heap;
    }

    static void testParentChild() {

        Parent * p = new Child();
        //p->net_price(2);
        p->release();
    }

};


#endif //CPP_ALGORITHM_CLASSTESTDEMO_H
