#include <iostream>
#include <valarray>
std::valarray<double> compute_gradient(std::valarray<double> x)
{
	std::valarray<double> temp(2);
	//This function returns the gradient vector of our objective function
	
            temp[0]=cos(x[0])*sin(x[1]); 
            temp[1]=cos(x[1])*sin(x[0]);
	    return(temp);
}
double compute_norm(std::valarray<double> x)
{
	double temp1,temp2;
	temp1=x[0]*x[0];
	temp2=x[1]*x[1];
	return(sqrt(temp1+temp2));
}
double objective(std::valarray<double> x)
{
	return(sin(x[0])*sin(x[1]));
}
int main(int argc, char *argv[])
{
	int n=0;
        double eps=1e-10; //Part of our stopping criteria
        double lambda=1; //The learning factor.  Maybe no need to adjust, but important
        std::valarray<double> x{-.1,.2},grad(2),x_prev(2);
        while ((compute_norm(x)-compute_norm(x_prev))> eps) 
        {
            grad=compute_gradient(x); //Get the gradient
	    x_prev=x;
            x-=lambda*grad; //Update x_{n+1}
            std::cout << n <<" " << x[0]<<","<<x[1] << std::endl;
            n++;                                                        
        }
        return(0);
}
//n,x,eps,        %display end values
