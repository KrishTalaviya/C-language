#include<stdio.h>
#include<conio.h>


int main()
{ 
  
 // count words in string


	int i,sum=1;
	char s[40];
	clrscr();
	printf("Enter a string:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')sum++;
		
	}
	printf("\nTotal words:%d",sum);
	getchar();
  
  
 
return 0;
    
}