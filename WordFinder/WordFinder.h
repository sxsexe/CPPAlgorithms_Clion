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

using namespace std;

struct WordItem{

    std::string word;                   //要查找的单词
    std::size_t totalCount;             //总数量
    std::set<int> lineSets;     //行号集合
    std::map<int, int> eachLineCount;//每行的个数

    void printOut() {
        std::cout << word << ", totalCount=("<<totalCount<< "): " << std::endl;
        auto lineBegin = lineSets.cbegin();
        auto lineEnd = lineSets.cend();
        while(lineBegin != lineEnd) {
            auto key = *lineBegin;
            auto count = eachLineCount.find(key)->second;
            cout << "Line(" << key << "), Count=" << count << endl;
            lineBegin++;
        }
    }

    ~WordItem() {
        cout << "~WordItem" << endl;
    }
};


class WordFinder {

public:

    ~WordFinder();

    static WordFinder* getInstance();

    void setFilePath(std::string& filePath) {
        this->filePath = filePath;
    }

    bool beginProcess(std::string& targetWord);

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

    /**
     * 处理每一行的string
     * @param line
     * @param item
     * @return true: find到
     */
    bool processEachLine(int lineNum, std::string& line, WordItem & item);

};


#endif //CPP_ALGORITHM_WORDFINDER_H
