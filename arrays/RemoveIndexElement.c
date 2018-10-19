
#include<stdio.h>
#include<stdlib.h>
int removeIndexPostionElement(int *, int , int);
int main()
{

	int *a;
	int i,size,index;
	
	printf("Enter the size of an array:\n");
	scanf("%d",&size);
	
	a = (int *)malloc(size*sizeof(int));
	printf("Enter the elements in an array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Displaying the elements in an array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("Enter the index to remove the element:\n");
	scanf("%d",&index);
    
    removeIndexPostionElement(a,size,index);
    
	free(a);
	return 0;
}
int removeIndexPostionElement(int *a, int size, int index)
{
    
    if(index <= size)
    {
        for(int i = index-1 ; i < size-1 ; i++)
        {
            a[i] = a[i+1];
        }
        printf("New Array:\n");
        for(int i = 0 ; i < size-1 ; i++)
        {
            printf("%d\n",a[i]);
        }
    }
    else
    {
        printf("Unable to remove, Index not found...\n");
    }
}
