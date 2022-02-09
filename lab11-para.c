#include <stdio.h>
int main()
{
   int a,n,sum,b;
	printf(" enter no. n");
	scanf("%d",&n) ;
  b=n;
	 sum=0;
 while(n>0)
{
     a=n%10;
     n=n/10;
     sum=(sum*10)+a;
}
if(b==sum)
{
  printf("no is paradenode");
}
else
{
printf("not para");
}
	return 0;
}
 
    