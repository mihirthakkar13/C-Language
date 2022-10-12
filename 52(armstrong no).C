#include<stdio.h>
#include<conio.h>

void main()
{

int i,sum=0,no1,no,original;
clrscr();

	printf("enter number=");
	scanf("%d",&no);
	original=no;


	for(i=no;i>=0;i--)
	{
		no1=no%10;    
		sum=(no1*no1*no1)+sum;   
		no=no/10;
	}
	
	 if(sum==original)
	 {                                           
		printf("armstrong number");
	 }
	 
	 
	 else
	 {
		printf("not an armstrong number");
	 }


getch();

}