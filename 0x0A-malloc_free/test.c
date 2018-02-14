#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 5;
	int *p = &n;

//	int *a = (int*)malloc(sizeof(int));

	a[0] = 4;

	printf("n = %d\n*p = %d\na[0] = %d\n", n, *p, a[0]);

	free(a);

	return(0);
}
