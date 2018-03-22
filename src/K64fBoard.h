#ifndef K64FBOARD_H
#define K64FBOARD_H
#include<mbed.h>

class K64fBoard
{
  public:
    //Constant memeber functions
    PinName getRedLED();
    PinName getGreenLED();
    PinName getBlueLED();

};

#endif // K64FBOARD_H
