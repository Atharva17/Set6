#include<stdio.h>
int main()
{
	int num,dig,temp,sum=0;
	scanf("%d",&num);
	while(num!=0)
	{
		dig=num%10;
		sum+=dig;
		num=num/10;
	}
	printf("Sum of the digits %d",sum);
return 0;
	}
