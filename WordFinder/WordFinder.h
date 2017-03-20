//
// Created by ll on 17-3-20.
//

#ifndef CPP_ALGORITHM_WORDFINDER_H
#define CPP_ALGORITHM_WORDFINDER_H

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

struct WordItem{

    std::string word;                   //要查找的单词
    std::size_t totalCount;             //总数量
    std::set<std::size_t> lineSets;     //行号集合
    std::map<std::size_t, std::size_t> eachLineCount;//每行的个数
};


class WordFinder {

public:

    ~WordFinder();

    static WordFinder* getInstance();

    void setFilePath(std::string& filePath) {
        this->filePath = filePath;
    }

    bool beginProcess();

    void printOut();

    void releaseInstance();

    void test();


private:
    WordFinder();

    static WordFinder * sIntance;

    std::string filePath = "";

    WordItem *wordItem = nullptr;

    std::vector<std::string> fileContent;

    bool readFile(std::string& filePath);

};


#endif //CPP_ALGORITHM_WORDFINDER_H
