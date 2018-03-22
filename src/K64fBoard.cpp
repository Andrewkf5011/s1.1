#include "K64fBoard.h"
#include <mbed.h>

PinName K64fBoard::getRedLED()
{
  return PTB22;
}

PinName K64fBoard::getGreenLED()
{
  return PTE26;
}

PinName K64fBoard::getBlueLED()
{
  return PTB21;
}
