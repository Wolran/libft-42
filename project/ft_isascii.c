#include "libft.h"

int isascii(int c)
{
	if (c <= 127 && c >= 0)
		return (1);
	return (0);
}