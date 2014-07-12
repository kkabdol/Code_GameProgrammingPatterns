//
//  Statue.h
//  UpdateMethod
//
//  Created by Seonghyeon Choe on 7/12/14.
//  Copyright (c) 2014 shuan. All rights reserved.
//

#ifndef __UpdateMethod__Statue__
#define __UpdateMethod__Statue__

#include "Entity.h"
#include <iostream>

using namespace std;

class Statue : public Entity
{
public:
    Statue(int delay) : frames_(0), delay_(delay) {}
    
    virtual void update()
    {
        if (++frames_ == delay_)
        {
            shootLightning();
            
            // Reset the timer.
            frames_ = 0;
        }
    }
    
private:
    int frames_;
    int delay_;
    
    void shootLightning()
    {
        cout << "A statue is shooting the lightning." << endl;
        // Shoot the lightning...
    }
};

#endif /* defined(__UpdateMethod__Statue__) */
