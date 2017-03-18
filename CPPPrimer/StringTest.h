//
// Created by lxd on 17/3/5.
//

#ifndef CPP_ALGORITHM_STRINGTEST_H
#define CPP_ALGORITHM_STRINGTEST_H

#include <iostream>
#include <string>

class StringTest {

public:
    /**
     * 读取用户输入，如果读到quit就退出
     */
    static void readOneLine();

    /**
     * 读取用户输入的单词，quit就退出
     */
    static void readWord();

    /**
     * 替换string中所有的c1为newChar
     * @param src
     * @param c1
     * @param newChar
     */
    static void replaceCharWith(std::string &src, const char *c1, const char *newChar);

    static void testReplaceCharWith();


    /**
     *去除string中所有的标点符号，并返回该字符串
     * @return
     */
    static std::string& removeAllPunct(std::string &src);
    static void testRemoveAllPunct();


};


#endif //CPP_ALGORITHM_STRINGTEST_H
