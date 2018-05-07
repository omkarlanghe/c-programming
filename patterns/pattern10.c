/*
				*	
			*	*	*	
		*	*	*	*	*	
	*	*	*	*	*	*	*	
*	*	*	*	*	*	*	*	*	
	*	*	*	*	*	*	*	
		*	*	*	*	*	
			*	*	*	
				*		
*/

#include <stdio.h>
 
int main()
{
	int n,space = 1;
 
  	printf("Enter number of rows\n");
  	scanf("%d", &n);
 
  	space = n - 1;
 
  	for (int i = 1; i <= n; i++)
  	{
  	int ch=65;
  	int count=1;
    		for (int j = 1; j <= space; j++)
    		{
     			printf("\t");
     		}
     		space--;
	
		for (int j = 1; j <= 2*i-1; j++)
		{
	     		printf("*\t");
	     		if(j>=i)
	     		{
	     			count--;
	     		}
	     		else
	     		{	
	     			count++;
	     		}
		}
   		printf("\n");
  	}
 
  	space = 1;
 
  	for (int i = 1; i <= n - 1; i++)
  	{
  	int ch=65;
  	int count=1;
    		for (int j = 1; j <= space; j++)
      		{
      			printf("\t");
      		} 
	    	space++;
 
    		for (int j = 1 ; j <= 2*(n-i)-1; j++)
      		{
      			printf("*\t");
      			if(j<=i)
	     		{
	     			count--;
	     		}
	     		else
	     		{	
	     			count++;
	     		}
 		}
  		printf("\n");
  	}
 
  	return 0;
}
