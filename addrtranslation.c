// Console input and output.
// Input is from the keyboard or serial port.
// Output is written to the screen and serial port.

#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
	printf(1, "\n ----- ADDRESS TRANSLATION -----\n");
	if (argc < 2) {
		printf(2, "Direccion virtual...\n");
	}
	
	printf(1, "\n Status from system call: %s", addrtranslate(argv[1]));
	
	exit();
}