//
//  PikachuObject.cpp
//  PikachuConnect
//
//
//

#include "PikachuObject.h"
#include "GameDefine.h"
#define SCALE_OBJECT 3
#define MAX_ARRAY 36
enum{
    z_Order_bgNode = 0,
    z_Order_Character = 1,
};

static std::string pikachutileName[MAX_ARRAY] = {"seaFruit1.png","seaFruit2.png","seaFruit3.png","seaFruit4.png","seaFruit5.png","seaFruit6.png",
                                                 "seaFruit7.png","seaFruit8.png","seaFruit9.png","seaFruit10.png","seaFruit11.png","seaFruit12.png",
                                                 "seaFruit13.png","seaFruit14.png","seaFruit15.png","seaFruit16.png","seaFruit17.png","seaFruit18.png",
                                                 "seaFruit19.png","seaFruit20.png","seaFruit21.png","seaFruit22.png","seaFruit23.png","seaFruit24.png",
                                                 "seaFruit25.png","seaFruit26.png","seaFruit27.png","seaFruit28.png","seaFruit29.png","seaFruit30.png",
                                                 "seaFruit31.png","seaFruit32.png","seaFruit33.png","seaFruit34.png","seaFruit35.png","seaFruit36.png"};


PikachuObject::PikachuObject()
{

}
PikachuObject::~PikachuObject()
{

}

void PikachuObject::runActionStartGame()
{

}


void PikachuObject::createUIObject()
{

    bgNode = Sprite::create("bgAnimal2.png");
    bgNode->setPosition(this->getPosition());
    this->addChild(bgNode,z_Order_bgNode);
    character = Sprite::createWithSpriteFrameName(pikachutileName[type]);


    character->setPosition(this->getPosition());
    character->setScale(SCALE_OBJECT);
    this->addChild(character,z_Order_Character);
    if (valueVisiable == TAG_PIKACHU_VISIABLE)
    {
        character->setVisible(true);
        bgNode->setVisible(true);
    }
    else
    {
        character->setVisible(false);
        bgNode->setVisible(false);
    }


}
void PikachuObject::updateUI(int type)
{
    if(character)
    {
        character->setSpriteFrame(pikachutileName[type]);
    }
}
void PikachuObject::setTagObject(int tagObject)
{
    this->tagObject = tagObject;
}
int PikachuObject::getTagObject()
{
    return tagObject;
}

void PikachuObject::actionWhenClick()
{
    auto action1 = ScaleTo::create(0.08f, 0.8f);
    auto action2 = DelayTime::create(0.02f);
    auto sequence = Sequence::create(action1, action2, NULL);
    bgNode->runAction(sequence);
}
void PikachuObject::effectWhenDieObject()
{
    bgNode->setVisible(false);
    character->setVisible(false);
}
void PikachuObject::backToStartObject()
{
    bgNode->runAction(ScaleTo::create(0.1f, 1.0f));
}

void PikachuObject::hidePikachu()
{
    bgNode->setVisible(false);
    character->setVisible(false);
}
void PikachuObject::updateNewPosition(const Vec2& position)
{
    this->setPosition(position);
    if(bgNode)
    {
        bgNode->setPosition(this->getPosition());
    }
    if(character)
    {
        character->setPosition(this->getPosition());
    }
}
void PikachuObject::setValueVisiable(int valueVisiable)
{
    this->valueVisiable = valueVisiable;
}
int PikachuObject::getValueVisiable()
{
    return valueVisiable;
}
void PikachuObject::update(float dt)
{
    if(this->getValueVisiable() ==  TAG_PIKACHU_HIDDEN)
    {
        bgNode->setVisible(false);
        character->setVisible(false);
    }
    else
    {
        bgNode->setVisible(true);
        character->setVisible(true);
    }
}

void PikachuObject::onEnter()
{
    Node::onEnter();
}
void PikachuObject::onExit()
{
    Node::onExit();
}
void PikachuObject::setVisiableSprite()
{
    if(bgNode->isVisible() == false)
    {
        bgNode->setVisible(true);
    }
    if(character->isVisible() == false)
    {
        character->setVisible(true);
    }
}
void PikachuObject::updateZorder(int newZoder)
{

}

void PikachuObject::objectWhenPause()
{

    if(bgNode)
    {
        bgNode->setLocalZOrder(10001);
    }
    if(character)
    {
        character->setLocalZOrder(10000);
    }

}
void PikachuObject::objectWhenPlay()
{

    if(bgNode)
    {
        bgNode->setLocalZOrder(10000);
    }
    if(character)
    {
        character->setLocalZOrder(10001);
    }

}


