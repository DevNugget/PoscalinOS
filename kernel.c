char *vidmem = (char *)0xb8000;

void print(char* string, int color) {
	int chars;
	int charsInStr = 0;

	for (chars = 0; string[chars] != '\0'; chars++);

	for (int j = 0; j < chars + 1; j++) {
		j += 1;
		vidmem[j] = color;
	}
	for (int i = 0; i < chars*2; i++) {
		vidmem[i] = string[charsInStr];
		i += 1;
		charsInStr += 1;
	}
}

int kmain()
{
	print("Hello World!", 0x07);
}
