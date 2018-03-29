#include<stdio.h>

int main()
{
	int arr[10] = {1,2,3};
	int *ptr1 = arr;
	int *ptr2 = arr + 5;
	
	printf("%d",ptr2-ptr1);
	
return 0;	
}
