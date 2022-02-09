#include <stdio.h>
int main()
{
   int a,n,sum;
	printf(" enter no. n");
	scanf("%d",&n) ;
	 sum=0;
 while(n>0)
{
     a=n%10;
     n=n/10;
     sum=(sum*10)+a;
}
printf("%d",sum);
	return 0;
}
 
    