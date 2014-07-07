//
//  Comedian.h
//  DoubleBuffer
//
//  Created by Seonghyeon Choe on 7/7/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __DoubleBuffer__Comedian__
#define __DoubleBuffer__Comedian__

#include "Actor.h"
#include <iostream>
using namespace std;

class Comedian : public Actor
{
public:
    Comedian(string name) : Actor(name) {}
    
    void face(Actor* actor)
    {
        facing_ = actor;
        cout << "now " << name() << " is facing to " << facing_->name() << endl;
    }
    
    virtual void update()
    {
        if (wasSlapped()) facing_->slap();
    }
    
    
private:
    
    Actor* facing_;
};

#endif /* defined(__DoubleBuffer__Comedian__) */
