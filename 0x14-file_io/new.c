#include "holberton.h"
int main(void)
{
	printf("%x\n", (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH));
	return (0);
}
