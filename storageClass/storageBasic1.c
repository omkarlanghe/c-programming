#include<stdio.h>

int foo()
{
	static int i;//static int i=0; same as noncommented as by default static variables are initialize to zero.
	
	i++;
	
	printf("foo Invoked %d\n",i);
}

	
int main()
{

	foo();
	foo();
	foo();

}
