#ifndef K64FBOARD_H
#define K64FBOARD_H
#include<mbed.h>

class K64fBoard
{
  private:
     int RED_LED;
     int GREEN_LED;
     int BLUE_LED;

  public:
    K64fBoard();
    int getRED_LED(void)
    {
      return RED_LED;
    }

    int getGREEN_LED(void)
    {
      return GREEN_LED;
    }

    int getBLUE_LED(void)
    {
      return BLUE_LED;
    }
};

#endif // K64FBOARD_H
