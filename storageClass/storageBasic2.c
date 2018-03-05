#include<stdio.h>

int foo()
{
	static int i = 10;
	int j = 10;

	i++;
	j++;
	
	printf("\nfoo Invoked %d foo Invoked %d\n",i,j);
	printf("i=%p j=%p\n",&i,&j);
}

int bar()
{
	int k = 0;
	printf("%p",&k);
	foo();
}

int main()
{
	foo();
	foo();
	foo();
	bar();
}
