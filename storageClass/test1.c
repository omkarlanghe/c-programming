#include<stdio.h>

int iGlobal = 100;
static int iGlobalStatic = 200;

//using non static global pointer static varible can be accessed/changed outside this file.

int *iGlobalStaticPtr = &iGlobalStatic;

//using non static methods static variable can be accessed/changed outside this file.

int getGlobalStatic()
{
	return iGlobalStatic;
}

void setGlobalStatic(int value)
{
	iGlobalStatic = value;
}

void foo()
{
	printf("\nGlobal=%d,StaticGlobal=%d\n",iGlobal,iGlobalStatic);
}

void increement()
{
	iGlobal++;
	iGlobalStatic++;
}

static void decrement()
{
	iGlobal--;
	iGlobal--;
}
