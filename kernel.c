#include "include/io.h"
#include "include/types.h"
#include "include/strings.h"
#include "include/screen.h"

int kmain()
{
	clearLine(0, 32);
	
	if (strLen("1") == 1) {
		print("Hello World!", white);	
	}
}
