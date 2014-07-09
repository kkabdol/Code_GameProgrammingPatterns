//
//  Stage.h
//  DoubleBuffer
//
//  Created by Seonghyeon Choe on 7/7/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __DoubleBuffer__Stage__
#define __DoubleBuffer__Stage__

#include "Actor.h"
#include <iostream>
using namespace std;

class Stage
{
public:
    void add(Actor* actor, int index)
    {
        actors_[index] = actor;
    }
    
    void update()
    {
        for (int i = 0; i < NUM_ACTORS; ++i) {
//            cout << "Stage updates actor " << i << " (" << actors_[i]->name() << ")" << endl;
            actors_[i]->update();
        }

        for (int i = 0; i < NUM_ACTORS; ++i) {
            actors_[i]->swap();
        }
    }
    
private:
    static const int NUM_ACTORS = 3;
    
    Actor* actors_[NUM_ACTORS];
};

#endif /* defined(__DoubleBuffer__Stage__) */
