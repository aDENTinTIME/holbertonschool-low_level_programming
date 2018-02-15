#include <stdio.h>
#include <stdlib.h>

void print_array(int ray[][2], int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		putchar(*(*ray + i) + '0');
	}
	putchar('\n');
}


int main(void)
{
	int i, ii;

	int arr[3][2] = {
		{1,2},
		{3,4},
		{5,6}
	};

	i = 0;

	print_array(arr, 6);

	putchar(*(*arr + 5) + '0');
	putchar('\n');

	return (0);

	for (i = 0; i < 2; i++)
	{
		for (ii = 0; ii < 3; ii++)
		{
			arr[i][ii] = 0;
		}
	}

	print_array(arr, 6);

	return(0);
}
