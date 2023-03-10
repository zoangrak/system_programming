#include <string.h>

void mystrcpy (char *dst, char *src)
{
	int cnt=0;

	while(src[cnt] != 0) {
		dst[cnt] = src[cnt];
		cnt++;
	}
}

