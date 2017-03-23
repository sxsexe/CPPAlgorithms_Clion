#include <iostream>

#include "fragments/Fragments.h"
#include "CPPPrimer/StringTest.h"
#include "CPPPrimer/ArrayTest.h"

#include "CPPPrimer/CPPAlgorithmTest.h"
#include "CPPPrimer/PointerTest.h"

#include <thread>         // std::thread, std::thread::id, std::this_thread::get_id
#include <chrono>         // std::chrono::seconds

#include "WordFinder/WordFinder.h"

#include "XDown/XDown.h"


//std::string sa[10];
//int ia[10];
using namespace std;

int main() {

//    Fragments::test2DArray();
//
//    Fragments::test2DArray1();
//
//    Fragments::testChangeLength1D();


//    StringTest::readOneLine();
//    StringTest::readWord();

//    StringTest::testReplaceCharWith();

//    StringTest::testRemoveAllPunct();

//    std::string sa2[10];
//    int ia2[10];
//    //sa2中是空字符串 ia2中为0
//    cout << sa2[2] << "," << ia2[2] << endl;

//    ArrayTest::test1();


//    Fragments::testIntance();

//    CPPAlgorithmTest::testAccumulate();

//    PointerTest::testPointer();
//    PointerTest::testStrBlob();

//    PointerTest *p =new PointerTest();
//    delete p;

//    std::this_thread::sleep_for(std::chrono::seconds{10});


//    PointerTest *p =new PointerTest();
//    delete p;

//    StringTest::findSubString();

//    WordFinder::getInstance()->test();
//    WordFinder::getInstance()->releaseInstance();

    XDown::test();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}