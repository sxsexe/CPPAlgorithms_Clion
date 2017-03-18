//
// Created by lxd on 17/3/17.
// 包含一个shard_ptr保存的string
//

#ifndef CPP_ALGORITHM_STRBLOB_H
#define CPP_ALGORITHM_STRBLOB_H

#include <iostream>
#include <vector>
#include <string>
#include <memory>

#include "Screen.h"

class StrBlob {

public:
    typedef std::vector<std::string>::size_type size_type;

    StrBlob();

    StrBlob(std::initializer_list<std::string> il);

    ~StrBlob();

    size_type size() const { return data->size(); }

    bool empty() const { return data->empty(); }

    void push_back(const std::string &t) { data->push_back(t); }

    void pop_back();

    std::string &front();

    std::string &back();

    void dumpData();

private:
    std::shared_ptr<std::vector<std::string>> data;

    //如果data[i]不合法，抛出一个异常
    void check(size_type i, const std::string &msg) const;

    std::shared_ptr<Screen> mScreen;

};


#endif //CPP_ALGORITHM_STRBLOB_H
