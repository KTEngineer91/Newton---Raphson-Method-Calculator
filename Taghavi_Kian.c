#include <stdlib.h>
#include <stdio.h>
#include <math.h>
void find_root(double);
main()
{

	double root;

	printf("Enter the initial estimate of the root:\n");
	scanf("%lf",&root);

	find_root(root);
	system("pause");
}

void find_root(double root)
{

double x = root;
double x_n ;
int update=0;
double i=0.0000001;
double f_xn;
double fprime_xn;
while ((update<500 || fabs(f_xn) >=i))
{

	f_xn= pow(x,3)-3;// x^3-3

	fprime_xn = 3*pow(x,2);// 3x^2

		x_n = x-(f_xn/fprime_xn);

		if((fabs(f_xn)<i))	break;

			if(fprime_xn ==0)
			{
			fprime_xn = (double) abs((x_n-x)/x_n);
			}



	x=x_n;
	update++;

}

printf("The final estimate of the root is %f\n",x_n);
printf("The number of iterations that were applied is %d\n",update);
printf("The value of |f(x)| at the final estimate of the root is %f\n",fabs(f_xn));

}
