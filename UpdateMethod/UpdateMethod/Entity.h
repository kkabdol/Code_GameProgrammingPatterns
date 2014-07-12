//
//  Entity.h
//  UpdateMethod
//
//  Created by Seonghyeon Choe on 7/11/14.
//  Copyright (c) 2014 shuan. All rights reserved.
//

#ifndef __UpdateMethod__Entity__
#define __UpdateMethod__Entity__

class Entity
{
public:
    Entity() : x_(0.0), y_(0.0) {}
    
    virtual ~Entity() {}
    virtual void update() = 0;
    
    double x() const { return x_; }
    double y() const { return y_; }
    
    void setX(double x) { x_ = x; }
    void setY(double y) { y_ = y; }
    
private:
    double x_, y_;
};

#endif /* defined(__UpdateMethod__Entity__) */
