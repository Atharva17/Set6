#include <stdio.h>
int main(void)
{
     int a,b,i,sum=0,n;
     scanf("%d%d%d",&n,&a,&b);
     for(i=0;i<n;i++)
         {
         	sum=a+b;
          a=b;
          b=sum;
	         printf("%d\t",sum);
         }    
     return 0;
}
 
