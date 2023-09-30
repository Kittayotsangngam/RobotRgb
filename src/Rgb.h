#include <Arduino.h>
class Rgb
{
// private:
//     /* data */
//     uint32_t _temp_int_private;
public:
    uint16_t RedColor;
    uint16_t GreenColor;
    uint16_t BlueColor;
    uint16_t GndEarRight=1;
    uint16_t GndEarLeft=1;
    uint16_t GndArmRight=1;
    uint16_t GndArmLeft=1;
    uint16_t GndBase=1;

    Rgb(uint16_t RedColor,uint16_t GreenColor,uint16_t BlueColor, uint16_t  GndEarRight,uint16_t GndEarLeft
    ,uint16_t GndArmRight,uint16_t GndArmLeft,uint16_t GndBase);
    ~Rgb();
    void begin();
    void fullBody(int Red,int Green,int Blue);
    void earRight(int Red,int Green,int Blue);
    void earLeft(int Red,int Green,int Blue);
    void armRight(int Red,int Green,int Blue);
    void armLeft(int Red,int Green,int Blue);
    void base(int Red,int Green,int Blue);

};

