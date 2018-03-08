#include<stdio.h> 
int main ()
{
  char s[50];
  int i,count=0,no;
  scanf("%s",s);
  for(i=0;s[i]!='\0';i++)
   if((s[i]>='a' && s[i] <='z' )|| (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
     count++;
   if(count>0)
    printf("yes");
    else
    printf("no");
      return 0;
}


