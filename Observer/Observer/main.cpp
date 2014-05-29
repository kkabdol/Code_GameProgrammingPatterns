//
//  main.cpp
//  Observer
//
//  Created by Seonghyeon Choe on 5/28/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include <iostream>
#include "Hero.h"
#include "Achievements.h"
#include "Physics.h"

int main(int argc, const char * argv[])
{
    Hero hero;
    Achievements achievements;
    Physics physics;
    
    // init
    physics.addObserver(&achievements);
    achievements.showUnlocked();

    // do
    physics.updateEntity(hero);
    achievements.showUnlocked();
    
    // clean up
    physics.removeObserver(&achievements);
    
    return 0;
}

