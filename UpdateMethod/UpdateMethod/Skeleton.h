//
//  Skeleton.h
//  UpdateMethod
//
//  Created by Seonghyeon Choe on 7/12/14.
//  Copyright (c) 2014 shuan. All rights reserved.
//

#ifndef __UpdateMethod__Skeleton__
#define __UpdateMethod__Skeleton__

#include "Entity.h"
#include <iostream>

using namespace std;

class Skeleton : public Entity
{
public:
    Skeleton() : patrollingLeft_(false) {}

    virtual void update(double elapsed)
    {
        if (patrollingLeft_)
        {
            setX(x() - elapsed);
            if (x() <= 0) {
                patrollingLeft_ = false;
                cout << "A skeleton changed patrolling direction to right" << endl;
            }
        }
        else
        {
            setX(x() + elapsed);
            if (x() >= 5) {
                patrollingLeft_ = true;
                cout << "A skeleton changed patrolling direction to left" << endl;
            }
        }
    }
    
private:
    bool patrollingLeft_;
};

#endif /* defined(__UpdateMethod__Skeleton__) */
