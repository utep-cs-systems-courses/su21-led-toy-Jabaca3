#include <msp430.h>
#include "stateMachines.h"
#include "led.h"
#include "switches.h"

void
__interrupt_vec(WDT_VECTOR) WDT(){
  static char interruptTime =250;
  static char blink_count = 0;
  static char buzz_count = 0;
  
  if(++blink_count == interruptTime){
    blink_button_advance(blink_count);
    blink_count=0;
  }
  
  /*
  if(blink_count == interruptTime) {          // Change to zero to make brightest 
    turn_on_red();                          // Turn on red
    blink_count=0;
    //state_advance_1();                      // Uncomment to make most dim
  }
  else if(blink_count <= interruptTime){
    turn_off_red();                        // Turn off red
    blink_count++; 
  }
  */
}
