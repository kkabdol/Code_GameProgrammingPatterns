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
const double MS_PER_UPDATE = 10.0 * MS_PER_FRAME;

void processInput();
void update();
void render(double delta);

int main(int argc, const char * argv[])
{
    time_t previous = time(nullptr);
    double lag = 0.0;
    
    while (true) {
        time_t current = time(nullptr);
        double elapsed = difftime(current, previous);
        previous = current;
        lag += elapsed;
        
        // 1. processing input function without blocking
        processInput();
        
        // 2. deterministic update function
        while (lag >= MS_PER_UPDATE) {
            update();
            lag -= MS_PER_UPDATE;
        }

        // 3. extrapolated render function
        render(lag / MS_PER_UPDATE);
    }
    
    return 0;
}


void processInput() {
}

void update() {
}

void render(double delta) {
}
