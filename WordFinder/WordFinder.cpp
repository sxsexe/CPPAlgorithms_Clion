//
// Created by ll on 17-3-20.
//

#include "WordFinder.h"


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

bool WordFinder::beginProcess() {

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

    if(readFile()) {

    }


}