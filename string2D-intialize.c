#include<stdio.h>
#include<string.h>


int main()
{ 
  char str[3][5]={"hello", 
                  "india", 
                  "good", 
                 };
   int i,j;
   for(i=0;i<3;i++)
    {
      printf("%s",&str[i]);
    }
    for(i=0;i<3;i++)
    {
      printf("\n%s",&str[i]);
    }
  
  
 
return 0;
    
}