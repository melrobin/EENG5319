#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double loss(double x1,double x2)
{
	return((x1-x2)*(x1-x2));
}
int main(int argc,char *argv[])
{
	FILE *fp;
        double x[3],dummy,weight[3],bias[3],output,net,y,sum=0,wo;
	int i;
	fp=(FILE*)fopen("random.csv","r");
        for (i=0;i<3;i++)
	{
		fscanf(fp,"%lf,",&dummy);
		x[i]=dummy;
		weight[i]=rand()/(double)RAND_MAX;
		bias[i]=rand()/(double)RAND_MAX;
	}
	
	/*The following skips a column */
	fscanf(fp,"%lf,",&output);
	/************************************ */
	fscanf(fp,"%lf",&output);
	printf("%f\n",output);
	/*finished reading one line from training file */
	wo=rand()/(double)RAND_MAX;
        for (i=0;i<3;i++)
	   sum+=weight[i]*x[i]+bias[i];
	net=sum;
	y=wo*tanh(net);
	printf("Eureka the output is: %f\n",y);
	printf("Loss: %f\n",loss(y,output));
	return(0);
}

