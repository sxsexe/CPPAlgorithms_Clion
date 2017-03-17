//
// Created by lxd on 17/3/11.
//

#include "Screen.h"
#include <iostream>


Screen::~Screen() {

    std::cout << "~Screen()" << std::endl;
}


inline
Screen& Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos ht, pos wd) const {
    pos index = ht * width + wd;
    return contents[index];
}

Screen& Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

Screen& Screen::set(pos r, pos c, char ch) {
    pos index = r * width + c;
    contents[index] = ch;
    return *this;
}
