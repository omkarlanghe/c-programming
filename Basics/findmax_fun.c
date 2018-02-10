#include<stdio.h>
int max(int fn,int sn,int tn){

 if((fn>sn)&&(fn>sn))
 {
  printf("%d is greater:\n",fn);
 }
 else if((sn>tn))
 {
  printf("%d is greater:\n",sn);
 }
 else
 {
  printf("%d is greater:\n",tn);
 }
}

int main()
{
 int fn,sn,tn;
 printf("Enter first number:\n");
 scanf("%d",&fn);
 printf("Enter second number:\n");
 scanf("%d",&sn);
 printf("Enter third number:\n");
 scanf("%d",&tn);
 
 printf("max:",max(fn,sn,tn));
 
 return 0;
}
