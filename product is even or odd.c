#include<stdio.h>
int main()
{
	int num1,num2,product;
	scanf("%d%d",&num1,&num2);
	product=num1*num2;
	if(product%2==0)
  printf("even");
  else
  printf("odd");
  return 0;
}
