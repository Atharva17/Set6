#include <stdio.h>
int main(void)
{
    int num,digit,rev=0;
    scanf("%d",&num);
    while(num!=0)
    {
    	digit=num%10;
    	rev=rev*10+digit;
    	num/=10;
    }
     
      while(rev!=0)
      {
      	digit=rev%10;
      	printf("%d\t",digit);
      	rev/=10;
      }
      
       return 0;
}
