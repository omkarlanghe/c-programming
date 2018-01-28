#include<stdio.h>
int multiple(int num)
{
 if((num & 7)==0){
 	//printf("%d is multiple\n",num);
 	return num;
 }else{
 	//printf("%d is not a multiple\n",num);
 	return num;
 }
 
}

int main()
{
 int num;
 printf("Enter the number:\n");
 scanf("%d",&num);
 if(multiple(num)){
  printf("%d is multiple\n",num);
 }
 else
 {
  printf("%d is not multiple\n",num);
 }
 return 0;

}
