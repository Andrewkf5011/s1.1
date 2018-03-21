#include <mbed.h>
#include "LED.h"
#include "K64fBoard.h"

K64fBoard board;

LED light[] = {
  LED(board.getRED_LED),
  LED(board.getBLUE_LED),
  LED(board.getGREEN_LED)
};

int main() {

    while(1) {
      int k;
      for( k=0 ; k<3 ; k++){
        light[k].on();
        wait(0.5);
        light[k].off();
      }
    }
}
