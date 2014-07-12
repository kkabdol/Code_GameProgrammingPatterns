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

    virtual void update()
    {
        if (patrollingLeft_)
        {
            setX(x() - 1);
            if (x() == 0) {
                patrollingLeft_ = false;
                cout << "A skeleton changed patrolling direction to right" << endl;
            }
        }
        else
        {
            setX(x() + 1);
            if (x() == 100) {
                patrollingLeft_ = true;
                cout << "A skeleton changed patrolling direction to left" << endl;
            }
        }
    }
    
private:
    bool patrollingLeft_;
};

#endif /* defined(__UpdateMethod__Skeleton__) */
