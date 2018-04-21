/*
          
         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************

*/
#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number of rows:\n");
	scanf("%d",&n);
	
	int temp=n;
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<temp;j++)
		{
			printf(" ");
		}
		
		temp--;
		
		for(int j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
