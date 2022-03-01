#include<stdio.h>
#include<conio.h>


int main()
{ 
  
  int n, i, sum=0;
  char str[n];
   printf("enter n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
    {
      scanf("%c",&str[i]);
    }
   
    
    for(i=0;i<n;i++)
    {
      if(str!='\0')
       {
         sum=sum++;
       }
    }
    printf("length of string=%d",sum);
  
  
 
return 0;
    
}