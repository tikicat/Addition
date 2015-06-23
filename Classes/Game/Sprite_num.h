//
//  Sprite_num.h
//  Destructoctomath
//
//  Created by qianwenjun on 15/6/23.
//
//

#ifndef __Destructoctomath__Sprite_num__
#define __Destructoctomath__Sprite_num__

#include <stdio.h>
#include "cocos2d.h"

class Sprite_num : public cocos2d::Sprite
{
public:
    Sprite_num();
    virtual ~Sprite_num();
    bool init();
    CREATE_FUNC(Sprite_num);
protected:
    // 自己的数值
    CC_SYNTHESIZE(int, _num, Num);
};

#endif /* defined(__Destructoctomath__Sprite_num__) */
