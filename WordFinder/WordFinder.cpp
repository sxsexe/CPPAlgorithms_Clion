//
// Created by ll on 17-3-20.
//

#include "WordFinder.h"
#include <fstream>
#include <iostream>
#include <istream>
#include <sstream>
#include <string>
#include <cctype>

#include "../Util/TimeUtil.h"


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
        in.close();
    }

    return result;
}

bool WordFinder::processEachLine(int lineNum, std::string &line, WordItem &item) {

    /* 效果不好，对某些特殊字符没办法区分，比如target\r
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
     */

    if(line.empty()) {
        return false;
    }
    std::string target = item.word;
    int count = 0;//每行的个数
    int lineLength = line.length();
    int targetWordLength = target.length();

    int index = 0;
    std::string::size_type pos = line.find(target, index);
    while(index < lineLength) {
        if(pos == std::string::npos) {
            break;
        } else {
            if(this->mEntireWord) {
                bool flagFront = false;
                bool flagEnd = false;
                //检查找到的target后边一个字符是否是字母
                int tmpIndex = pos + targetWordLength;
                if(tmpIndex < lineLength) {
                    char c1 = line[tmpIndex];
                    if(isalnum(c1)) {
                        //如果后边的字符是数字或字母,则不是单词
                    } else {
                        flagEnd = true;
                    }
                } else {
                    flagEnd = true;
                }
                //检查找到的target前边一个字符是否是字母
                tmpIndex = pos - 1;
                if(tmpIndex >= 0) {
                    char c1 = line[tmpIndex];
                    if(isalnum(c1)) {
                        //如果前边的字符是数字或字母,则不是单词
                    } else {
                        flagFront = true;
                    }
                } else {
                    flagFront = true;
                }
                if(flagEnd && flagFront) {
                    count++;
                }
                index = pos + targetWordLength;
            } else {
                count++;
                index = pos + targetWordLength;
            }
            pos = line.find(target, index);
        }
    }

    if(count > 0) {
        item.lineSets.insert(lineNum);
        item.eachLineCount.insert({lineNum, count});
        item.totalCount += count;
        return true;
    }

}

bool WordFinder::beginProcess(std::string& targetWord, bool entireWord) {

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
    this->mEntireWord = entireWord;


    if(readFile(this->filePath)) {
        auto begin = fileContent.cbegin();
        auto end = fileContent.cend();
        int lineNum = 1;
        while(begin != end) {
            string line = *begin++;
            if(processEachLine(lineNum, line, *wordItem)) {
//                cout << lineNum << "::" << line << endl;
            }

            lineNum++;
        }
    } else {
        cout << " read file failed" << endl;
    }

}


void WordFinder::printOut() {

    cout << "printOut results >>>>>>>>>>>>>" << endl;
    if(wordItem) {
        wordItem->printOut();
    }

}


void WordFinder::test() {

    long start = TimeUtil::currentTimeMillis();
//    std::string filePath("/Users/lxd/log/xx");
    std::string filePath("/Users/lxd/log/1618.txt");
    WordFinder::getInstance()->setFilePath(filePath);

//    std::string targetWord("SEED");
    std::string targetWord("service");
    WordFinder::getInstance()->beginProcess(targetWord, true);

    WordFinder::getInstance()->printOut();

    long end = TimeUtil::currentTimeMillis();
    cout << "Took " << (end - start) << "ms" << endl;

}












