//
// Created by Administrator on 2017/4/2 0002.
//

#include "TestClient.h"
#include "Core2048.h"
#include <cstdio>
#include <cstdlib>


using namespace std;

void TestClient::test(int argc, char **argv) {


    printf("Useage,\tinput i to initiliaze game,\n\tinput w to move up,\n \tinput s to move down,"
                   "\n \tintpu a to move left,\n \tinput d to move right\n");

    Core2048 core2048;

    bool initialized = false;
    char c1;
    while(cin >> c1) {
        if(!initialized) {
            if(c1 == 'i') {
                core2048.initData();
                initialized = true;
            } else {
                printf("Wrong Usage\n");
            }
        } else {
            switch (c1) {
                case 'w' :
                    core2048.handleInputEvent(ACTION_UP);
                    break;
                case 's' :
                    core2048.handleInputEvent(ACTION_DOWN);
                    break;
                case 'a' :
                    core2048.handleInputEvent(ACTION_LEFT);
                    break;
                case 'd' :
                    core2048.handleInputEvent(ACTION_RIGHT);
                    break;
                case 'q':
                    printf("Bye Bye");
                    break;
                default:
                    printf("Wrong Usage\n");
                    break;
            }
        }
    }

}