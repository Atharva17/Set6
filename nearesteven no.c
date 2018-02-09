#include <stdio.h>
int main(void) 
{
	int num,i;
	scanf("%d",&num);
	for(i=num-1;i<=num;i--)
            if(i%2==0)
            {
              printf("%d",i);
              break;
            }
            return 0;
}
