#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*double babylon()
{
	return x;
}*/

int main(int argc, char *argv[])
{
	/* First command line parameter is the initial condition or x_0 */
	/* Second command line parameter is epsilon */
	/* Third command line parameter is argument */
	int i=0;
	double S,x,x_prev;
        double epsilon;
	if (argc != 4)
	{
		printf("You have not given me enough parameters.  Go away!\n");
		exit(0);
	}
	x=atof(argv[1]);
	epsilon=atof(argv[2]);
	S=atof(argv[3]);
	while (fabs(x_prev-x)>epsilon)
        /*for (i=0;i<N;i++)*/
	{
	   x_prev=x;
           x=(x+S/x)/2;
	   printf("%d\t%f\t%f\t%f\n",i+1,x,sqrt(S),log10(fabs(S-x*x)));
	   i++;
	}
	return(0);
}

