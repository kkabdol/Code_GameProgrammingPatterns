//
//  World.cpp
//  UpdateMethod
//
//  Created by Seonghyeon Choe on 7/14/14.
//  Copyright (c) 2014 shuan. All rights reserved.
//

#include "World.h"
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;
void sleepForSecs(double sec);

void World::gameLoop()
{
    time_t previous = time(nullptr);

    while (true) {
        time_t current = time(nullptr);
        double elapsed = difftime(current, previous);
        previous = current;
        
        // Handle user input...
        
        // Update each entity...
        for (int i = 0; i < numEntities_; ++i) {
            entities_[i]->update(elapsed);
        }
        
        // Physics and rendering...
        
        sleepForSecs(SEC_PER_FRAME - elapsed);
    }
}

void sleepForSecs(double sec) {
    long long dur = static_cast<long long>(sec * 1000.0);
    
    if (dur > 0) {
        this_thread::sleep_for(chrono::milliseconds(dur));
    }
}