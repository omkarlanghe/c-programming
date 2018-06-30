#include<stdio.h>

int main()
{
	int a[10],i;
	
	printf("Enter the elements in an array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);	
	}
	
	selectionSort(a);
	for(i=0;i<10;i++)
	{
		printf("Sorted Elements:%d\n",a[i]);
	}
	
}

void selectionSort(int a[])
{
	int i,j;

	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		
		}
	}
	//return temp;
}
