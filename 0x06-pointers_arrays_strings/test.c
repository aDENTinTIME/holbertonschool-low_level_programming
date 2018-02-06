#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = "hel looldwo";
    char *f = "dlewho";
    unsigned int n;

    n = strspn(s, f);
    printf("%u\n", n);

	return(0);
}
