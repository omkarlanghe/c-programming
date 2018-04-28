#include<stdio.h>

typedef struct{

	long int i:7; //gives only 7 bits
	char j:4;
	
}BITFIELDS_T;

int main()
{
	printf("size of structure is %d\n",sizeof(BITFIELDS_T));
	
	BITFIELDS_T bitFields = {.i=0, .j=0};
	bitFields.i = 189; //7 bits 128+61, hence answer is 61
	bitFields.j = 15; //4 bits all 1, answer is -1
	
	printf("I is %d J is %d\n",bitFields.i,bitFields.j);
	
	//printf("%p\n",&bitFields.i);
	//Address of operator cannot be applied on bitfields as memory is allocated in terms of bits.
	
	return 0;
}
