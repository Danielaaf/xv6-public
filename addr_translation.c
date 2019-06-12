// Console input and output.
// Input is from the keyboard or serial port.
// Output is written to the screen and serial port.

#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
	//printf(1, "\n ----- ADDRESS TRANSLATION -----\n");
	//char *virtual_addr;
	//virtual_addr = argv[1];

	//printf(1, "\n Entered virtual adress: %s\n", virtual_addr);
	//printf(1, "\n Status from system call: %s", addr_translation(virtual_addr));
	addr_translate();
	exit();
}