#include<stdio.h>
#include<conio.h>


int main()
{ 
  
// reverse string example


	int len,i,j;
	char s1[20],s2[20];
	clrscr();
	printf("Enter orignal string :");
	gets(s1);
	len=0;
	while(s1[len]!='\0')
	{
		len++;
	}
	for(i=0,j=len-1;i<len;i++,j--)
	{
		s2[j]=s1[i];
	}
	s2[len]='\0';
	printf("\nreverse string :%s",s2);
	getch();



	
  
  
 
return 0;
    
}