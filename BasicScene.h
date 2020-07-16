#ifndef __BasicScene_H__
#define __BasicScene_H__


#include "cocos2d.h"

class BasicScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);

    // implement the "static create()" method manually
    CREATE_FUNC(BasicScene);
};

#endif // __HELLOWORLD_SCENE_H__