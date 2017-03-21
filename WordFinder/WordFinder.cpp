//
// Created by ll on 17-3-20.
//

#include "WordFinder.h"
#include <fstream>
#include <iostream>
#include <istream>
#include <sstream>


using namespace std;

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
    }


    return result;
}

void WordFinder::processEachLine(std::string &line, WordItem &item) {

    if(line.empty()) {
        return;
    }



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

    if(readFile(this->filePath)) {
        auto begin = fileContent.cbegin();
        auto end = fileContent.cend();
        while(begin != end) {

            string line = *begin;
            processEachLine(line, targetWord);
        }

    }


}


void WordFinder::printOut() {

    cout << "printOut results " << endl;

}












