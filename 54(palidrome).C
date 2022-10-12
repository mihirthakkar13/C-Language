#include<stdio.h>
#include<conio.h>

void main()
{
	
int no,original,no1,reverse=0;
clrscr();

	printf("enter number=");
	scanf("%d",&no);
	original=no;

	while(no>0)
	{
		no1=no%10;
		reverse=reverse*10 + no1;
		no=no/10;

	}
	
	if(reverse==original)
	{
		printf("Palindrome number");
	}
	

	else
	{
		printf("NOT a Palindrome number");
	}

	
getch();
}