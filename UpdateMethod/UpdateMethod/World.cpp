//
//  World.cpp
//  UpdateMethod
//
//  Created by Seonghyeon Choe on 7/12/14.
//  Copyright (c) 2014 shuan. All rights reserved.
//

#include "World.h"
#include <ctime>
#include <thread>
#include <chrono>
#include <iostream>

using namespace std;

static const double MS_PER_FRAME = 1000.0 / 60.0;

void sleepForOneTick(double diff, double millisecondsPerFrame);

void World::gameLoop()
{
    time_t previous = time(nullptr);

    while (true)
    {
        time_t current = time(nullptr);
        double elapsed = difftime(current, previous);
        previous = current;
        
        
        // Handle user input
        
        // Update each entity
        for (int i = 0; i < numEntities_; ++i) {
            entities_[i]->update(elapsed);
        }
        
        // Physics and rendering
        
        
        sleepForOneTick(elapsed, MS_PER_FRAME);
    }
}

void sleepForOneTick(double diff, double millisecondsPerFrame) {
    diff *= 1000.0; // milliseconds
    long long dur = static_cast<long long>(millisecondsPerFrame - diff);
    
    if (dur > 0) {
        cout << "slept" << endl;
        this_thread::sleep_for(chrono::milliseconds(dur));
        cout << "woke up" << endl << endl;
    }
}