//
// Created by ll on 17-4-2.
//

#include "LineIntent.h"


using namespace std;

void LineIntent::add(CardData *src, CardData *dest) {

//    mMovePair.insert(*src, dest);

}

void LineIntent::clear() {

    mMovePair.clear();

}

void LineIntent::dump() {

    if(mMovePair.empty()) {
        cout << "MovePair is empty" << endl;
    } else {
        mMovePair.key_comp();
    }

}