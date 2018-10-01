#include<stdio.h>

void JumpingArray(char array[], int start, int end, int step)
{
    printf("printing the range array\n");
    for(int i = start ; i <= end ; i++)
    {
        printf("%c",array[i]);
    }
    printf("\n");
    printf("printing character using step\n");
    for(int i = start ; i <= end ; i=i+step)
    {
        printf("%c",array[i]);
    }
    printf("\n");
}

void SimulateOperation()
{
    char array[10];
    int start, end, step;
    
    printf("Enter the elements in an array:\n");
    for(int i=0 ; i<=10 ; i++)
    {
        scanf(" %c",&array[i]);
    }
    printf("Enter the start index:\n");
    scanf("%d",&start);
    
    printf("Enter the end index:\n");
    scanf("%d",&end);
    
    printf("Enter the step size:\n");
    scanf("%d",&step);
    
    JumpingArray(array,start,end,step);
}

int main()
{
    SimulateOperation();
    return 0;
}
