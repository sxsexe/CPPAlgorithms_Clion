//
// Created by lxd on 17/3/16.
//

#include "CPPAlgorithmTest.h"
#include <string>
#include <iostream>
#include <sstream>
#include <numeric>
#include <stdlib.h>


using namespace std;

void CPPAlgorithmTest::getIntVector(vector<int> &numbers, size_t count) {

    string input;
    int number;
    auto index = 0;
    while (cin >> input) {
        try {
            number = stoi(input);
            cout << input << "number=" << number << endl;
            numbers.push_back(number);
            if (++index == count) {
                break;
            }
        } catch (std::invalid_argument e) {
            cout << "invalid_argument input=" << input << endl;
        }
    }
}

void CPPAlgorithmTest::getDoubleVector(std::vector<double> &numbers, size_t count) {
    string input;
    double number;
    auto index = 0;
    while (cin >> input) {
        try {
            number = stod(input);
            cout << input << "number=" << number << endl;
            numbers.push_back(number);
            if (++index == count) {
                break;
            }
        } catch (std::invalid_argument e) {
            cout << "invalid_argument input=" << input << endl;
        }
    }
}

void CPPAlgorithmTest::testAccumulate() {
//    vector<int> numbers;
//    getIntVector(numbers);
    vector<double> numbers;
    getDoubleVector(numbers);

    long x = 3791433752;
    printf("x=%x\n", x);

    cout << "sum = " << accumulate(numbers.cbegin(), numbers.cend(), 0.0f) << endl;

}