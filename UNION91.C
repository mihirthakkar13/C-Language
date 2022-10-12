#include<stdio.h>
#include<conio.h>

union student
{
	
	int a;
	char c;
	float f;

}s;

void main()
{
clrscr();



	printf("\nenter char=");
	scanf("%c",&s.c);
	printf("\n%c",s.c);

	printf("\nenter integer=");
	scanf("%d",&s.a);
	printf("\n%d",s.a);

	printf("\nenter float value=");
	scanf("%f",&s.f);
	printf("\n%f",s.f);


getch();
}