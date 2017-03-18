//
// Created by lxd on 17/3/11.
//

#ifndef CPP_ALGORITHM_SCREEN_H
#define CPP_ALGORITHM_SCREEN_H


#include <string>

class Screen {

public:
    typedef std::string::size_type pos;

    Screen();

    ~Screen();

    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

    char get() const {
        return contents[cursor];
    }

    inline char get(pos ht, pos wd) const;

    Screen &move(pos r, pos c);

    Screen &set(char c);

    Screen &set(pos r, pos c, char ch);


private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;

};


#endif //CPP_ALGORITHM_SCREEN_H
