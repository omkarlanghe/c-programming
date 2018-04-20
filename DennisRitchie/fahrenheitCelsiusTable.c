#include<stdio.h>

int main()
{
	int fahr, cel;
	int lower,upper,step;
	
	lower=0;	//lower limit of tempreature table
	upper=300;	//higher limit of tempreature table
	step=20;	//step size
	
	lower = fahr;
	printf("Fahrenite\tCelsius\n");
	while(fahr <= upper)
	{
		cel = 5 * (fahr-32)/9;
		printf("%d\t\t%d\n",fahr,cel);
		fahr = fahr + step;
	}
	
	return 0;
}
