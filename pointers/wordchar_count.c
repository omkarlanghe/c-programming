/*
 write a program to accept line from user and display the count of words and characters present in the given line.
*/
#include<stdio.h>
#include<string.h>

int main()
{
	char line[100];
	
	printf("\n Enter Line:");
	gets(line);
	
	int charCount = 0;
	int wordCount = 1;
	
	word_char_count(line,&wordCount,&charCount); //returning multiple values to the funtion using &-Operator.
	
	printf("\n line=%s\n word_count=%d\n char_count=%d\n",line,wordCount,charCount);
	
	return 0;
}

void word_char_count(const char *line, int *wordCount, int *charCount)
{
	while(*line!='\0')
	{
		++*charCount;

		if(*line == ' ')
		{
			++*wordCount;		
		}
		++line;
	}
}
