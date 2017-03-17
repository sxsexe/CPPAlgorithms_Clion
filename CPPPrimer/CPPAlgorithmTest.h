//
// Created by lxd on 17/3/16.
//

#ifndef CPP_ALGORITHM_CPPALGORITHMTEST_H
#define CPP_ALGORITHM_CPPALGORITHMTEST_H

#include <vector>
#include <algorithm>


class CPPAlgorithmTest {

public:
    //读取5个用户输入，只接受int
    static void getIntVector(std::vector<int> & vector, std::size_t count = 5);
    //读取5个用户输入，只接受double
    static void getDoubleVector(std::vector<double> & vector, std::size_t count = 5);

    static void testAccumulate();


};


#endif //CPP_ALGORITHM_CPPALGORITHMTEST_H
