/*
	write a program to count blanks,tabs,and newlines if any..
*/
#include<stdio.h>

int main()
{	
	int c;
	countBlankLines(c);
	return 0;
}
int countBlankLines(int c)
{	
	int nofchar=0,noflines=0,noftabs=0,nofBlanks=0;
	c = getchar();
	//while((c=getchar())!=EOF)
	//{
		if(c == '\n')
		{
			noflines++;
		}
		else if(c == ' ')
		{
			nofBlanks++;
		}
		else if(c == '\t')
		{
			noftabs++;
		}
	//}
	printf("no.of lines:%d\nno.of blanks:%d\nno.of tabs:%d\n",noflines,nofBlanks,noftabs);
	return 0;
}
