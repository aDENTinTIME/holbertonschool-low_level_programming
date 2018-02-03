/**
* leet - Translates a string to 1337.
* @src: Source string.
* Return: 1337 string.
*/

char *leet(char *src)
{
	int i, ii;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; src[i] != '\0'; i++)
	{
		for (ii = 0; let[ii] != '\0'; ii++)
		{
			if (src[i] == let[ii])
				src[i] = num[ii];
		}
	}
	return (src);
}
