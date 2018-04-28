#include<stdio.h>
int main()
{
	struct point{

		int x;
		int y;
	};
	
	struct point p = {.x=0,.y=0};
	struct point l = {2,3};
	struct point A;
	A.x = 10;
	A.y = 12;
	
	printf("struct point p:\n x=%d y=%d\n",p);
	printf("struct point l:\n x=%d y=%d\n",l);
	printf("struct point A:\n x=%d y=%d\n",A);
	
	return 0;

}

