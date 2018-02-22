#include<stdio.h>
int oddeven(){

int n;
printf("Enter the number:\n");
scanf("%d",&n);

 n = n & 1; //use of bitwise AND..

 if(n == 0 ){
  printf("even number\n");
 }else{
  printf("odd number\n");
 }

}

int main(){

oddeven();
return 0;

}
