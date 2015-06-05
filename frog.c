//#ifdef _PLAN9
	#include <u.h>
	#include <libc.h>
	#define RAND_MAX 32768
	#define M_PI PI
//#endif
#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>

void
main (int argc, char **argv)
{
	double angle;
	double dist;
	double x;
	double y;
	int i;
	int jumps;

	if (argc != 2){
		fprint(2, "usage: %s N\n", argv[0]);
		exits("usage");
	}

	jumps = atoi (argv[1]);

	srand (time (NULL));

	while (1)
	{
		x = y = 0.0;

		for (i = 0; i != jumps; i++)
		{
			angle = ((double)rand() / RAND_MAX) * 2.0 * M_PI;
			dist = (double)rand() / RAND_MAX;

			x += cos (angle) * dist;
			y += sin (angle) * dist;
		}

		print ("%f\n", sqrt (x*x + y*y));
	}
}
