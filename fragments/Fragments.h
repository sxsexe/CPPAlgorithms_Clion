//
// Created by lxd on 17/3/3.
// 一些测试小方法的集合
//

#ifndef CPP_ALGORITHM_FRAGMENTS_H
#define CPP_ALGORITHM_FRAGMENTS_H


class Fragments {

public:

    /**
     * 动态申请二维数组内存
     * @tparam T
     * @param pT
     * @param numRows
     * @param numColumns
     */
    template <class T>
    static void new2DArray(T **&pT, int numRows, int numColumns);

    /**
     * 删除二维数组
     * @tparam T
     * @param pT
     * @param numRows
     * @param numColumns
     */
    template <class T>
    static void delete2DArray(T **&pT, int numRows, int numColumns);

    static void test2DArray();
    template <class T>
    static void dump2DArray(T **&pT, int numRows, int numColumns);



};


#endif //CPP_ALGORITHM_FRAGMENTS_H
