//
// Created by lxd on 17/3/5.
//

#include "StringTest.h"

#include <iostream>

using namespace std;

void StringTest::readOneLine() {

    string line;

    while (getline(cin, line)) {
        if (line == "quit") {
            break;
        }
        cout << "output : " << line << endl;
    }

    cout << "readOneLine Over" << endl;

}


void StringTest::readWord() {

    string word;
    while (cin >> word) {
        cout << "output : " << word << endl;
    }

    cout << "readWord Over" << endl;
}

void StringTest::replaceCharWith(string &src, const char *c1, const char *newChar) {
    if (src.empty()) {
        cout << "src is empty" << endl;
        return;
    }
    if (c1 == nullptr || newChar == nullptr) {
        return;
    }

    cout << "before src=" << src << endl;

    for (auto &c : src) {
        if (c == *c1) {
            c = *newChar;
        }
    }
    cout << "after src=" << src << endl;

}

void StringTest::testReplaceCharWith() {

    string src = "Hello World!!!";
    char *c1 = "o", *c2 = "S";
    replaceCharWith(src, c1, c2);

}

std::string &StringTest::removeAllPunct(std::string &src) {
    if (src.empty()) {
        return src;
    }
#if 0
    //第一种方式，两个string，逐个复制
    string *newStr = new string(src);
    cout << "src=" << src << endl;
    decltype(src.size()) index = 0;
    decltype(src.size()) k = 0;
    for (; index < src.size(); index++) {
        if (!ispunct(src[index])) {
            cout <<src[index];
            (*newStr)[k++] = src[index];
        }
    }
    (*newStr)[k] = '\0';
    cout << "newStr=" << *newStr << endl;
    return *newStr;
#endif
#if 0
    //第二种方式，操作一个string
    cout << "src=" << src << endl;
    decltype(src.size()) index = 0;
    for (; index < src.size(); index++) {
        if(ispunct(src[index])) {
            int start = index;
            int end = src.size();
            for(;start<end; start++) {
                src[start] = src[start+1];
            }
            //移动完毕后，留在当前位置继续排查下一个字符
            index--;
        }
    }
    src[index] = '\0';
    cout << "newStr=" << src << endl;
#endif

#if 1
    int size = src.length();
    char *p = new char(size);
    const char *cp = src.c_str();
    memcpy(p, cp, size * sizeof(char));

    string s1(p);
    cout << "s1=" << s1 << endl;

    for (int i = 0; i < size; i++) {
        if(ispunct(p[i])) {
            int start = i;
            for(; start < size; start++) {
                p[start] = p[start + 1];
            }
            //移动完毕后，留在当前位置继续排查下一个字符
            i--;
        }
    }
    string *s = new string(p);
    cout << " s=" << *s << endl;

    return *s;
#endif

}

void StringTest::testRemoveAllPunct() {

    string src = "!nihao,xiaoyun,haha!!!go!!!";
    removeAllPunct(src);

}
