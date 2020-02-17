#include <knightos/display.h>
#include <knightos/system.h>

/* Pink Floyd Ascii Art Program written in C */
/* TJ Liggett (2019) */
/* Written to compile and run on TI-84 Plus Calculators */

void main() {
	SCREEN *screen;
	get_lcd_lock();
	screen = screen_allocate();
	screen_clear(screen);
	draw_string(screen, 0, 2, "         /\\");
	draw_string(screen, 0, 7, "     ___/_ \\----------");
	draw_string(screen, 0, 12,"____/  /\\   \\---------");
	draw_string(screen, 0, 17,"      /      \\--------");
	draw_string(screen, 0, 22,"     /________\\");
	draw_string(screen, 0, 30, "You shout and no one");
	draw_string(screen, 0, 35, "seems to hear");
	draw_string(screen, 0, 40, "And if the band ur in");
	draw_string(screen, 0, 45, "starts playing");
	draw_string(screen, 0, 50, "different tunes");
	draw_string(screen, 0, 55, "I'll see you on the");
	draw_string(screen, 0, 60, "DARK SIDE OF THE MOON");
	screen_draw(screen);
	while (1);
}