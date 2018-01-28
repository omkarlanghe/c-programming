#include<stdio.h>

int main(){
 char ch;
 
 printf("Enter a character:");
 scanf("%c",&ch);
 printf("\n%c",ch);
 if(vowel(ch))
 {
 	printf("\n%c is vowel:", ch);
 }else{
 	printf("\n%c its not a vowel:",ch);
 }
return 0;
}
