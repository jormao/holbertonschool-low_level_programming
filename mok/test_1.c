#include <stdio.h>

void main(void)
{

	long int i, j, a, b, c;

	a = 1;
	b = 2;
	c = 0;
	printf("%ld ,", a);
	printf("%ld ,", b);

	for (j = 1; j <= 48; j++)
	{
		c = a + b;
		printf("%ld ,", c);
		a = b;
		b = c;
	}
	printf("\n");
}
