#include <stdio.h>
#include <conio.h>

void main()

	{
		int a=10;
		int b=5;
		
		clrscr();
		
		printf("%d\n" ,a);
		printf("%d\n" ,b);
		
		//a=10 b=5
		
		b=a++;
		//b=10++
		
		printf("%d\n" ,a);
		//a=11
		printf("%d\n" ,b);
		//b=10
		
		getch();
	}