#include <AT89S52.h> /*include header for AT89S52*/
#define LED P2_4 /*LED connected at port pin P2.4*/
#define SW P3_3 /*switch coonected at port pin P3.3*/
#define INPUT 1 /*To configure port pin as input '1' logic must be writtern on port pin*/
void main()
{    	
  while(1)  	/* Super loop (Infinite loop) */
  {
  led_off();
  }
}