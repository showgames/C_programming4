#include <stdio.h>

#define Mmax 3

void
view(int x[][Mmax], int Nmax)
{
	int i, j;
	for(i = 0; i < Nmax; i++) {
		for(j = 0; j < Mmax; j++) printf("%d ", x[i][j]);
		printf("\n");
	}
	printf("\n");
}

int
main(void)
{
	const int Nmax = 2;
	int a[Nmax][Mmax] = {
		{2, 4, 3},
		{8, 1, 7}
	};
	
	view(a, Nmax);
	return 0;
}

