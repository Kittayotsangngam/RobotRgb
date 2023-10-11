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
    uint16_t Gnd=1;

    Rgb(uint16_t RedColor,uint16_t GreenColor,uint16_t BlueColor, uint16_t Gnd);
    ~Rgb();
    void begin();
    void fullBody(int Red,int Green,int Blue);
};

