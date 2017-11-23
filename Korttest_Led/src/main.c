/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
#include <asf.h>

int main(void)
{
	board_init();


	ioport_toggle_pin(LED0);

	return 0;
}
