#include "Rgb.h"

Rgb::Rgb(uint16_t RedColor,uint16_t GreenColor,uint16_t BlueColor, uint16_t  GndEarRight,uint16_t GndEarLeft,uint16_t GndArmRight,uint16_t GndArmLeft,uint16_t GndBase)
{
 this->RedColor=RedColor;
 this->GreenColor=GreenColor;
 this->BlueColor=BlueColor;
 this->GndEarRight=GndEarRight;
 this->GndEarLeft=GndEarLeft;
 this->GndArmRight=GndArmRight;
 this->GndArmLeft=GndArmLeft;
 this->GndBase=GndBase;
}

Rgb::~Rgb()
{
}




void Rgb::begin()
{
    pinMode(this->RedColor,OUTPUT);
    pinMode(this->GreenColor,OUTPUT);
    pinMode(this->BlueColor,OUTPUT);
    pinMode(this->GndEarRight,OUTPUT);
    pinMode(this->GndEarLeft,OUTPUT);
    pinMode(this->GndArmRight,OUTPUT);
    pinMode(this->GndArmLeft,OUTPUT);
    pinMode(this->GreenColor,OUTPUT);
    analogWrite(this->RedColor,0);
    analogWrite(this->GreenColor,0);
    analogWrite(this->BlueColor,0);
    digitalWrite(this->GndEarRight,1);
    digitalWrite(this->GndEarLeft,1);
    digitalWrite(this->GndArmRight,1);
    digitalWrite(this->GndArmLeft,1);
    digitalWrite(this->GndBase,1);
}
    void Rgb::fullBody(int Red,int Green,int Blue){
        analogWrite(this->RedColor,Red);
        analogWrite(this->GreenColor,Green);
        analogWrite(this->BlueColor,Blue);
        digitalWrite(this->GndEarRight,0);
        digitalWrite(this->GndEarLeft,0);
        digitalWrite(this->GndArmRight,0);
        digitalWrite(this->GndArmLeft,0);
        digitalWrite(this->GndBase,0);
    }
     void Rgb::earRight(int Red,int Green,int Blue){
        analogWrite(this->RedColor,Red);
        analogWrite(this->GreenColor,Green);
        analogWrite(this->BlueColor,Blue);
        digitalWrite(this->GndEarRight,0);
        digitalWrite(this->GndEarLeft,1);
        digitalWrite(this->GndArmRight,1);
        digitalWrite(this->GndArmLeft,1);
        digitalWrite(this->GndBase,1);
    }
    void Rgb::earLeft(int Red,int Green,int Blue){
        analogWrite(this->RedColor,Red);
        analogWrite(this->GreenColor,Green);
        analogWrite(this->BlueColor,Blue);
        digitalWrite(this->GndEarRight,1);
        digitalWrite(this->GndEarLeft,0);
        digitalWrite(this->GndArmRight,1);
        digitalWrite(this->GndArmLeft,1);
        digitalWrite(this->GndBase,1);
    }
    void Rgb::armRight(int Red,int Green,int Blue){
        analogWrite(this->RedColor,Red);
        analogWrite(this->GreenColor,Green);
        analogWrite(this->BlueColor,Blue);
        digitalWrite(this->GndEarRight,1);
        digitalWrite(this->GndEarLeft,1);
        digitalWrite(this->GndArmRight,0);
        digitalWrite(this->GndArmLeft,1);
        digitalWrite(this->GndBase,1);

    }
   
    void Rgb::armLeft(int Red,int Green,int Blue){
        analogWrite(this->RedColor,Red);
        analogWrite(this->GreenColor,Green);
        analogWrite(this->BlueColor,Blue);
        digitalWrite(this->GndEarRight,1);
        digitalWrite(this->GndEarLeft,1);
        digitalWrite(this->GndArmRight,1);
        digitalWrite(this->GndArmLeft,0);
        digitalWrite(this->GndBase,1);

    }
    
    void Rgb::base(int Red,int Green,int Blue){
        analogWrite(this->RedColor,Red);
        analogWrite(this->GreenColor,Green);
        analogWrite(this->BlueColor,Blue);
        digitalWrite(this->GndEarRight,1);
        digitalWrite(this->GndEarLeft,1);
        digitalWrite(this->GndArmRight,1);
        digitalWrite(this->GndArmLeft,1);
        digitalWrite(this->GndBase,0);
    }
