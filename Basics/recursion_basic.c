//WAP to read a number from user and display the number digit by digit using recursion

#include<stdio.h>

int main(){
	int no;
	printf("Enter the number:\n");
	scanf("%d",&no);
	recursiveDigitbyDigitDisplay(no);
}

void recursiveDigitbyDigitDisplay(int no){

	if(no==0)
	 return;
	 
	recursiveDigitbyDigitDisplay(no/10);
	printf("\nDigit = %d\n",no%10);

}
