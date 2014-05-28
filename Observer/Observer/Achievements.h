//
//  Achievements.h
//  Observer
//
//  Created by Seonghyeon Choe on 5/28/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __Observer__Achievements__
#define __Observer__Achievements__

#include "Observer.h"
#include <map>

enum Achievement {
    ACHIEVEMENT_FELL_OFF_BRIDGE
};

class Achievements : public Observer
{
public:
    virtual void onNotify(const Entity& entity, Event event);
    void showUnlocked();
private:
    void unlock(Achievement achievement);

    bool heroIsOnBridge_;
    std::map<enum Achievement, bool> unlockList;
};

#endif /* defined(__Observer__Achievements__) */
