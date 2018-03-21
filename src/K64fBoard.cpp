#include "K64fBoard.h"
#include <mbed.h>

K64fBoard::K64fBoard()
{
  RED_LED = PTB22;
  GREEN_LED = PTB22;
  BLUE_LED = PTB22;
}
