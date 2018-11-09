#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void gen_data(char* filename, int num_rows)
{
	double *R,*C,*t;
	const double V_0=5.0;
	double v;
	FILE *fp;
	int i;
	fp=(FILE *)fopen(filename,"w");
        t=(double *)calloc(num_rows,sizeof(double));
        R=(double *)calloc(num_rows,sizeof(double));
        C=(double *)calloc(num_rows,sizeof(double));
	for (i=0;i<num_rows;i++)
	{
		double k;
		R[i]=(double)i;
		C[i]=(double)i/1e6;
		k=rand()/(double)RAND_MAX;
		t[i]=k*5.5*R[i]*C[i];
		v=V_0*exp(-t[i]/R[i]/C[i]);
		fprintf(fp,"%lf,%e,%lf,%lf\n",R[i],C[i],t[i],v);
	}
        fclose(fp);
 
}

int main(int argc,char *argv[])
{

        if (argc < 3)
	{
		printf("Not enough arguments.  Dueces!\n");
		exit(0);
	}
        gen_data(argv[1],atoi(argv[2]));
	/* Usage gen <filename> <num rows> */
	/* initialize time */
       return(0);
}



