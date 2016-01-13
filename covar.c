#include <stdio.h>
#include <math.h>

double
covariance(double* x, double* y, int n)
{
	int i;
	double sum_x = 0.0, sum_y = 0.0;
	double avg_x, avg_y;
	double sumprod = 0.0;

	if(n < 1) return 0.0;

	for(i = 0; i < n; i++) {
		sum_x += x[i];
		sum_y += y[i];
		sumprod += x[i] * y[i];
	}

	avg_x = sum_x / (double)n;
	avg_y = sum_y / (double)n;
	return sumprod / (double)n - avg_x * avg_y;
}

int
main(void)
{
	double x[] = {1.0, 2.0, 3.0};
	double y[] = {1.0, 2.0, 3.0};
	double cov;

	cov = covariance(x, y, 3);
	printf("covariance: %f\n", cov);

	return 0;
}

