#include "LED.h"
#include <mbed.h>

LED::LED(PinName p) : pin(p,1)
{
}

void LED::on(void)
{
  pin.write(0);
}

void LED::off(void)
{
  pin.write(1);
}
