//
//  Terrain.h
//  Flyweight
//
//  Created by Seonghyeon Choe on 5/27/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __Flyweight__Terrain__
#define __Flyweight__Terrain__

typedef char Texture;

class Terrain
{
public:
    Terrain(int movementCost,
            bool isWater,
            Texture texture) :
    movementCost_(movementCost),
    isWater_(isWater),
    texture_(texture)
    {}
    
    int getMovementCost() const { return movementCost_; }
    bool isWater() const { return isWater_; }
    const Texture& getTexture() const { return texture_; }
    void draw();
    
    enum Type{
        TERRAIN_GRASS,
        TERRAIN_HILL,
        TERRAIN_RIVER
    };
    
private:
    int movementCost_;
    bool isWater_;
    Texture texture_;
};

#endif /* defined(__Flyweight__Terrain__) */
