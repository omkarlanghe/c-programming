#include<stdio.h>

int AreDigitsSame(int no1, int no2){

	if(no1==no2)
	return 1;
	if(countofDigits(no1)==countofDigits(no2)){
		while(no1!=0){
			int digit = no1%10;
			
			int count1 = DigitCount(no1,digit);
			int count2 = DigitCount(no2,digit);
			if(count1 != count2)
				break;
			no1 = no1/10;
		}
		if(no1 == 0)
			return 1;
	}
	return 0;

}

int countofDigits(int no){
	int count=0;
	while(no!=0){
		count += 1;
		no = no/10;
	}
	return count;
}

int DigitCount(int no,int digit){
	int count = 0;
	while(no!=0){
	 int rem = no%10;
	 
	 if(rem == digit)
	 count++;
	 no=no/10;
	}
	return count;
}

int main(){
	int no1,no2;

	printf("Enter first number\n");
	scanf("%d",&no1);
	
	printf("Enter second number\n");
	scanf("%d",&no2);
	
	printf("%d\n",AreDigitsSame(no1,no2));
}
