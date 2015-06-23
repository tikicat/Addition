//
//  Sprite_num.cpp
//  Destructoctomath
//
//  Created by qianwenjun on 15/6/23.
//
//

#include "Sprite_num.h"

using namespace cocos2d;

Sprite_num::Sprite_num()
{
}

Sprite_num::~Sprite_num()
{
    
}

bool Sprite_num::init()
{
    bool bRet = false;
    do{
        CC_BREAK_IF( !Sprite::init());
        
        
        
        bRet = true;
    }while (0);
    
    return bRet;
}