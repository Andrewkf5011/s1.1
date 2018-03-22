#include "AssignmentBoard.h"
#include <mbed.h>

//Constant definitions (K64F).

//LEDs
const PinName AssignmentBoard::K64F_RED_LED = PTB22;
const PinName AssignmentBoard::K64F_GREEN_LED = PTE26;
const PinName AssignmentBoard::K64F_BLUE_LED = PTB21;
//Switches
const PinName AssignmentBoard::K64F_SW2 = PTC6;
const PinName AssignmentBoard::K64F_SW3 = PTA4;

//Constant definitions (Application Shield).

//LEDs
const PinName AssignmentBoard::SHIELD_RED_LED = D5;
const PinName AssignmentBoard::SHIELD_GREEN_LED = D9;
const PinName AssignmentBoard::SHIELD_BLUE_LED = D8;
//Switches
