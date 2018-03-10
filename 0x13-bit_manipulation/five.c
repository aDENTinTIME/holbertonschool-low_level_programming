unsigned int count = 0;

while (n && m)
{
	if ((n & 1) ^ (m & 1))
		count++;

	n >>= 1;
	m >>= 1;
}
