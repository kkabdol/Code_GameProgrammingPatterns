//
//  Achievements.cpp
//  Observer
//
//  Created by Seonghyeon Choe on 5/28/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "Achievements.h"
#include <iostream>

void Achievements::onNotify(const Entity& entity, Event event) {
    switch (event) {
        case EVENT_ENTITY_ON_BRIDGE:
            if (entity.isHero()) {
                heroIsOnBridge_ = true;
            }
            break;
        case EVENT_ENTITY_OFF_BRIDGE:
            if (entity.isHero()) {
                heroIsOnBridge_ = false;
            }
            break;
        case EVENT_ENTITY_FELL:
            if (entity.isHero() && heroIsOnBridge_) {
                unlock(ACHIEVEMENT_FELL_OFF_BRIDGE);
            }
            break;
            
        default:
            break;
    }
}

void Achievements::showUnlocked() {
    std::cout << "Unlocked Achievements" << std::endl;
    for (std::map<enum Achievement, bool>::iterator it = unlockList.begin();
         it != unlockList.end(); ++it) {
        switch (it->first) {
            case ACHIEVEMENT_FELL_OFF_BRIDGE:
                std::cout << "ACHIEVEMENT_FELL_OFF_BRIDGE" << std::endl;
                break;
                
            default:
                break;
        }
    }
    
    std::cout << "End" << std::endl << std::endl;
}

void Achievements::unlock(Achievement achievement) {
    unlockList[achievement] = true;
}