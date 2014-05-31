//
//  Monster.h
//  Prototype
//
//  Created by Seonghyeon Choe on 5/31/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __Prototype__Monster__
#define __Prototype__Monster__

class Monster {
public:
    virtual ~Monster() {};
    virtual Monster* clone() = 0;
    virtual void scream() = 0;
};

class Ghost : public Monster
{
public:
    virtual Monster* clone();
    virtual void scream();
};

class Demon : public Monster
{
public:
    virtual Monster* clone();
    virtual void scream();
};

class Sorceror : public Monster
{
public:
    virtual Monster* clone();
    virtual void scream();
};

#endif /* defined(__Prototype__Monster__) */
