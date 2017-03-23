//
// Created by ll on 17-3-20.
//

#include "WordFinder.h"
#include <fstream>
#include <iostream>
#include <istream>
#include <sstream>
#include <string>


using namespace std;

WordFinder * WordFinder::sIntance = nullptr;

WordFinder::WordFinder(){
}

WordFinder::~WordFinder() {
    if(wordItem) {
        delete wordItem;
        wordItem = nullptr;
    }
}

WordFinder* WordFinder::getInstance() {
    if(sIntance == nullptr) {
        sIntance = new WordFinder();
    }
    return sIntance;
}

void WordFinder::releaseInstance() {
    if(sIntance){
        delete sIntance;
        sIntance = nullptr;
    }
}

bool WordFinder::readFile(std::string &filePath) {
    bool result = false;
    string line;

    fileContent.clear();

    ifstream in(filePath);
    if(in.is_open()) {
        while(!in.eof()) {
            getline(in, line);
            fileContent.push_back(line);
        }
        result = true;
    }


    return result;
}

bool WordFinder::processEachLine(int lineNum, std::string &line, WordItem &item) {

    if(line.empty()) {
        return false;
    }
    std::string target;
    int count = 0;//每行的个数
    int lineLength = line.length();

    //查找开头，target+" "
    target = item.word + " ";
    std::string::size_type pos = line.find(target, 0);
    if(pos == 0) {//只有找到的位于位置0才认为成功
        count++;
    }

    //向后查找 " " + target + " "
    target = " " + item.word  + " ";
    int targetWordLength = target.length();
    int index = 0;
    while(index < lineLength) {
        pos = line.find(target, index);
        if(pos == std::string::npos) {
            break;
        } else {
            count++;
            index = pos + targetWordLength - 1;
        }
    }

    //查找末尾 " "+target
    target = " " + item.word ;
    pos = line.rfind(target);
    targetWordLength = target.length();
    if(lineLength == (pos + targetWordLength)) { //只有最后一个位置才认为是正确的
        count++;
    }

    if(count > 0) {
        item.lineSets.insert(lineNum);
        item.eachLineCount.insert({lineNum, count});
        item.totalCount += count;
        return true;
    }
    return false;
}

bool WordFinder::beginProcess(std::string& targetWord) {

    if(targetWord.empty()) {
        cout << "targetWord is empty!" << endl;
        return false;
    }

    if(filePath.empty()) {
        cout << "no file path, set file path first" << endl;
        return false;
    }

    if(!wordItem){
        wordItem = new WordItem();
        if(wordItem == nullptr) {
            cout << "Failed to new WordItem" << endl;
            return false;
        }
    }
    wordItem->word = targetWord;

    if(readFile(this->filePath)) {
        auto begin = fileContent.cbegin();
        auto end = fileContent.cend();
        int lineNum = 0;
        while(begin != end) {
            string line = *begin++;
            processEachLine(lineNum, line, *wordItem);
            lineNum++;
        }
    }

}


void WordFinder::printOut() {

    cout << "printOut results >>>>>>>>>>>>>" << endl;
    if(wordItem) {
        wordItem->printOut();
    }

}


void WordFinder::test() {
    std::string filePath("/Users/lxd/log/xx");
    WordFinder::getInstance()->setFilePath(filePath);

    std::string targetWord("SEED");
    WordFinder::getInstance()->beginProcess(targetWord);

    WordFinder::getInstance()->printOut();

}












