#include <mbed.h>

/* wrapper functions */
/* Create an array of outputs for the actual Pins */
DigitalOut led[] = { DigitalOut(LED_RED,1),
                     DigitalOut(LED_GREEN,1),
                     DigitalOut(LED_BLUE,1)
};
/* create an enum of _logical_ names */
enum leds {Red, Green, Blue };
/* Functions use the logical value as an array index to
   access the physical pin */
void  on(int l) { led[l].write(0); }
void off(int l) { led[l].write(1); }


int main() {

    /* Version one */
    //DigitalOut red(PTB22);
    //DigitalOut green(PTE26);
    //DigitalOut blue(PTB21);

    /* From https://os.mbed.com/teams/Freescale/wiki/frdm-k64f-pinnames */
    DigitalOut   red(LED_RED,  1); /* create with initial value of 1=>LED off */
    DigitalOut green(LED_GREEN,1);
    DigitalOut  blue(LED_BLUE, 1);

    LED b(LED_BLUE);
    while(1) {
      red.write(0);
      off(Green);
      b.on();
      wait(0.5);
      red.write(1);
      on(Green);
      b.off();
      wait(0.5);
    }
}
