/* dthlabs.com - July 22, 2017 */

#define F_CPU 1000000  // CPU frequency
#include <stdlib.h>
#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"
#include "lcd.c"

int main(void) {
  lcd_init(LCD_DISP_ON);
  lcd_clrscr();
  lcd_puts("   dthlabs.com\n");
  lcd_puts("    tech blog");
}
