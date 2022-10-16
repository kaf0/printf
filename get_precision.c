#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int get_precision(char *s, char formatter)
{
	int p, i;

	p = 0;
	for (i = 0; s[i] != formatter; i++)
	{
		if (s[i] == '.')
		{
			i++;
			while (s[i] != formatter)
			{
				p = 10 * p + s[i] - '0';
				i++;
			}
			if (p == 0)
				return (-1);
			break;
		}
	}
	return (p);
}
