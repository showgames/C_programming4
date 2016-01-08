#include <stdio.h>
#include <math.h>

#define NUM 50

int
main(void)
{
	unsigned i, j;
	unsigned sq_num = (int)sqrt((double)NUM);
	unsigned prime[NUM];

	/* 1 -> prime number */
	/* 0 -> composite number */
	for(i = 0; i < NUM; i++)
		prime[i] = 1;
	prime[0] = 0; /* 1 is not prime number. */

	for(i = 1; i < sq_num; i++) {
		if(prime[i] == 1)
			for(j = (i+1); (i+1) * j <= NUM; j++)
				prime[(i+1) * j - 1] = 0;
	}

	for(i = 0; i < NUM; i++)
		if(prime[i] == 1)
			printf("%3d", i + 1);
	putchar('\n');

	return 0;
}
