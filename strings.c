#include "include/strings.h"
#include "include/types.h"

U16 strLen(string chr) {
	U16 i = 1;
	while(chr[i++]);
	return --i;
}
