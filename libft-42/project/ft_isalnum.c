#include "libft.h"

int isalnum(int c)
{
	if (isalpha(c) || isdigit(c))
		return (1);
	return (0);	
}