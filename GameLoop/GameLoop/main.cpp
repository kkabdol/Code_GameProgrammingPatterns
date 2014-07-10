//
//  main.cpp
//  GameLoop
//
//  Created by Seonghyeon Choe on 7/10/14.
//  Copyright (c) 2014 shuan. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

const double MS_PER_FRAME = 1000.0 / 60.0;

void processInput();
void update();
void render();
void sleepForOneTick(const time_t& start, double millisecondsPerFrame);

int main(int argc, const char * argv[])
{
    while (true) {
        time_t start = time(nullptr);

        processInput();
        update();
        render();
        
        sleepForOneTick(start, MS_PER_FRAME);
    }
    
    return 0;
}


void processInput() {
}

void update() {
}

void render() {
}

void sleepForOneTick(const time_t& start, double millisecondsPerFrame) {
    double diff = (difftime(time(nullptr), start) * 1000.0); // milliseconds
    long long dur = static_cast<long long>(millisecondsPerFrame - diff);
    
    if (dur > 0) {
        this_thread::sleep_for(chrono::milliseconds(dur));
    }
}