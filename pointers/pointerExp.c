#include<stdio.h>

int main()
{
	char string[] = "Hello";
	char *ptr = string;
	
	printf("%c\n",*ptr);
	printf("%c\n",++*ptr);
	printf("%c\n",*++ptr);
	printf("%c\n",++*++ptr);
	//printf("%c\n",*++ptr++);   lvalue required as increment operand
	printf("%c\n"++*ptr++);
}
