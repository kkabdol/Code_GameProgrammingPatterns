//
//  main.cpp
//  DataModelPrototype
//
//  Created by Seonghyeon Choe on 6/3/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include <iostream>
#include "Monsters.h"

int main(int argc, const char * argv[])
{
    Monsters monsters("data.json");
    
    for (int i = 0; i < monsters.size(); ++i) {
        monsters.ShowData(i);
    }
    
    return 0;
}

