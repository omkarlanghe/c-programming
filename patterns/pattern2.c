#include<stdio.h>

int main(){
	pattern();
}
void pattern(int ch){
	scanf("%d",&ch);
	for(int i=0;i<ch;i++){
		for(int j=0;j<=i;j++){
		
			printf("A");
			ch++;
		}
		printf("\n");
	}
}
