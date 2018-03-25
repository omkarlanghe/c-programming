#include<stdio.h>

int main()
{
	int i;
	char *ptr = &i;
	short int *iptr  = &i;
	
	printf("Enter the numbers:\n");
	scanf("%d",&i);
	
	printf("\nDereferencing Integer using character pointer:");
	
		printf("\n1: %d",*ptr);
		ptr++;
		
		printf("\n2: %d",*ptr);
		ptr++;
		
		printf("\n3: %d",*ptr);
		ptr++;
		
		printf("\n4: %d",*ptr);
	
	printf("\nDereferencing Integer using short pointer:");
		
		printf("\n1: %d",*iptr);
		iptr++;
		
		printf("\n2: %d\n",*iptr);
		
return 0;
}
