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

    /**
     * 创建一个二维数组
     * @tparam T
     * @param pT
     * @param numRows 行数
     * @param rowSize 列数是有一维数组rowSize指定，第i行的列数是rowSize[i]
     */
    template <class T>
    static void new2DArray1(T **&pT, int numRows, int *rowSize);

    /**
     * 删除二维数组
     * @tparam T
     * @param pT
     * @param numRows
     * @param rowSize
     */
    template <class T>
    static void delete2DArray1(T **&pT, int numRows, int *rowSize);

    static void test2DArray1();


    /**
     * 更改一维数组长度，释放掉原来的数组
     * @tparam T
     * @param p
     * @param oldLength
     * @param newLength
     */
    template <class T>
    static T * changeLength1D(T * &p, int oldLength, int newLength);

    static void testChangeLength1D();

    static void testIntance();


};


#endif //CPP_ALGORITHM_FRAGMENTS_H
