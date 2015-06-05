#include <u.h>
#include <stdio.h>

void
main ()//int argc, char **argv)
{
	unsigned long long acc = 0;
	unsigned long long inside = 0;
	double dist;

	while (scanf ("%lf", &dist))
	{
		acc++;
		if (dist <= 1.0)
			inside++;

		printf ("%f\n", inside * 100.0 / acc);
	}
}
