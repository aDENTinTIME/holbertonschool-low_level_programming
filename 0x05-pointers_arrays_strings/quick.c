#include <stdio.h>

int main(void)
{
	char delim[] = " \t\n,;.!?\"(){}";
	int i;

	printf("%s\n", delim);

	for(i = 0; i < sizeof delim; i++) 
	{
		putchar(delim[i]);
	}
	putchar('\n');
	return(0);
}
