#include<stdio.h>
int main(){
 
 char ch;
 int i;
 float f;
 double d;
 unsigned int ui;
 short int si;
 long int li;
 long long int lli;
 long double ld;
 
 printf("Enter a character:\n");
 scanf("%c",&ch);
 printf("Enter an integer value:\n");
 scanf("%d",&i);
 printf("Enter floating point number:\n");
 scanf("%f",&f);
 printf("Enter double(float with 10 bits precesion)number:\n");
 scanf("%f",&d);
 printf("Enter the unsigned integer value:\n");
 scanf("%u",&ui);
 printf("Enter the short integer value:\n");
 scanf("%hi",&si);
 printf("Enter the long int value:\n");
 scanf("%ld",&li);
 printf("Enter the long long integer value:\n");
 scanf("%lld",&lli);
 printf("Enter the long double:\n");
 scanf("%Lf",&ld);
 
 printf("Your entered %c,%d,%f,%f,%u,%hi,%ld,%lld,%Lf",ch,i,f,d,ui,si,li,lli,ld);

 return 0;
}
