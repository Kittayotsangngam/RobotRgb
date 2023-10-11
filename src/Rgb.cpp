#include "Rgb.h"

Rgb::Rgb(uint16_t RedColor,uint16_t GreenColor,uint16_t BlueColor, uint16_t  Gnd)
{
 this->RedColor=RedColor;
 this->GreenColor=GreenColor;
 this->BlueColor=BlueColor;
 this->Gnd=Gnd;
}

Rgb::~Rgb()
{
}




void Rgb::begin()
{
    pinMode(this->RedColor,OUTPUT);
    pinMode(this->GreenColor,OUTPUT);
    pinMode(this->BlueColor,OUTPUT);
    pinMode(this->Gnd,OUTPUT);

    analogWrite(this->RedColor,0);
    analogWrite(this->GreenColor,0);
    analogWrite(this->BlueColor,0);
    digitalWrite(this->Gnd,1);

}
    void Rgb::fullBody(int Red,int Green,int Blue){
        analogWrite(this->RedColor,Red);
        analogWrite(this->GreenColor,Green);
        analogWrite(this->BlueColor,Blue);
        digitalWrite(this->Gnd,0);

    }
    
    
  