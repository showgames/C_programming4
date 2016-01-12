#include <stdio.h>

double
sum(double data[], int n)
{
	int i;
	double total = 0.0;

	for(i = 0; i < n; i++){
		total += data[i];
	}

	return total;
}

double
average(double data[], int n)
{
	double total = sum(data, n);
	return total / n;
}

double
var(double data[], int n)
{
	int i;
	double a = average(data, n);
	double v = 0.0;

	for(i = 0; i < n; i++)
		v += (data[i] - a) * (data[i] - a);
	return v / n;
}

int
main(void)
{
	double data[] = {1.2, 2,1, 3,1, 4,1, 5,1};
	int n = sizeof(data) / sizeof(data[0]);

	printf("Var is %f\n", var(data, n));

	return 0;
}
