#include<stdio.h>

void foo();
void increement();
void decrement();
void setGlobalStatic();
int getGlobalStatic();


int main()
{
	foo();
	increement();
	foo();	
	
	//decrement is static inside test1.c and hence the scope of the funtion is reduced to file,linkage is reduced to internal and lifetime is throughout the program(process).

	//As scope is reduced to file and linkage is reduced to internal cannot be invoked from here. We will face undefined reference error at link time.

	//static global variable and function have same restrictions/behaviour

	//decrement();
	//extern int iGlobalStatic;
	//iGlobalStatic++;

	extern int iGlobal;

	iGlobal++; //it is non static global hence scope is global, linkage is external, lifetime throughout the program(process)

	//accessing static variable via non static global setter and getter methods

	int value = getGlobalStatic();

	setGlobalStatic(++value);
	foo();

	extern int* iGlobalStaticPtr;

	++*iGlobalStaticPtr;

	foo();
return 0;
}


