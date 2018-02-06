#include<stdio.h>

int main(){
	pattern();
}
void pattern(int n){
	scanf("%d",&n);
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}

/*

****
***
**
*


*/
