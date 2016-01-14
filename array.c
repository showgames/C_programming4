#include <stdio.h>

void
reset(int x[], int n)
{
	int i;
	for(i = 0; i < n; i++)
		x[i] = 0;
}

int
main(int argc, char* argv[])
{
	const int n = 5;
	int i;
	int a[n] = {2, 4, 8, 1, 5};
	
	reset(a, n);

	for(i = 0; i < n; i++)
		printf("%d ", a[i]);

	return 0;
}

