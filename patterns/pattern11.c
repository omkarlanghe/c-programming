#include<stdio.h>

int main()
{
	int n,temp,c=0;
	char ch=65;
	printf("Enter the rows:\n");
	scanf("%d",&n);
	
	temp = n;
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=temp;j++)
		{
			printf(" ");
		}
		temp--;
		
		for(int k=0;k<=2*i-1;k++)
		{
			if((c&1)!=0)
			{
				printf("%d",c);
			}else
			{
				printf("%c",ch);
			}
		}
		c++;
		ch++;
		printf("\n");
	}
}
