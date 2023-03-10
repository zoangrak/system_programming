#include <stdio.h>

extern void mystrcpy(char*, char*);

int main()
{
	char str[80];

	mystrcpy(str, "Hello \0");
	puts(str);

	return 0;
}
