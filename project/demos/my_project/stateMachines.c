#include <msp430.h>
#include "stateMachines.h"
#include "led.h"
#include "switches.h"

void blink_button_advance(){
  char changed = 0;
  
  if(switch_state_down_1){
    red_on=1;
    changed=1;
   }
  else if(switch_state_down_1 == 0){
    red_on=0;
    changed=1;
   }
  led_changed = changed;
  led_update();
}


void state_advance(){ 
  red_on=1;
  led_changed = 1;
  led_update();
}
void state_advance_1(){
  red_on=0;
  led_changed=1;
  led_update();
}
