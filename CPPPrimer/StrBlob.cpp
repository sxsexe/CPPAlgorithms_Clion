//
// Created by lxd on 17/3/17.
//

#include "StrBlob.h"

using namespace std;

StrBlob::StrBlob():data(make_shared<vector<string>>()) {
    mScreen = make_shared<Screen>();
}

StrBlob::StrBlob(std::initializer_list<std::string> il) : data(make_shared<vector<string>>(il)) {
    mScreen = make_shared<Screen>();
}

StrBlob::~StrBlob() {
    cout << "~StrBlob" << endl;
}

void StrBlob::check(size_type i, const std::string &msg) const {
        if(i >= data->size()) {
            throw out_of_range(msg);
        }
}

void StrBlob::pop_back() {
    check(0, "pop on empty StrBlob");
    data->pop_back();
}

std::string& StrBlob::front() {
    check(0, "front on empty StrBlob");
    return data->front();
}

std::string& StrBlob::back() {
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::dumpData() {
    std::cout << "data.empty=" << empty() << " data.use_count=" << data.use_count() << std::endl;
    if(!empty()){
        auto begin = data->cbegin();
        auto end = data->cend();
        while(begin != end) {
            cout << " " << *begin++;
        }
    }
}
