#include<stdio.h>

int main(){
 int a,b,c;
 printf("Enter 1st Number:\n");
 scanf("%d",&a);

 printf("Enter 2nd Number:\n");
 scanf("%d",&b);

 printf("Enter 3rd Number:\n");
 scanf("%d",&c);
 
  if(a>b && a>c)
  {
   printf("%d is greater:\n",a);
  }
  else if(b>a && b>c)
  {
   printf("%d is greater:\n",b);
  }
  else
  {
   printf("%d is greater:\n",c);
  }
 
  return 0; 
}
