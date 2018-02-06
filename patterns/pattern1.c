#include<stdio.h>

int main(){
	pattern();
}

void pattern(int n){
	scanf("%d",&n);
	for(int i=0;i<=n;i++){ //loop for row
		for(int j=0;j<=i;j++){//loop for column
			printf("*");
		}
		printf("\n");
	}
}
