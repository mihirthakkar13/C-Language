#include<stdio.h>
#include<conio.h>

struct student
{
	int rollno;
	int mark1,mark2,mark3;
	int total;
	float per;
}s;

void main()
{
clrscr();

	printf("Enter roll no=");
	scanf("%d",&s.rollno);

	printf("Enter mark1=");
	scanf("%d",&s.mark1);

	printf("Enter mark2=");
	scanf("%d",&s.mark2);

	printf("Enter mark3=");
	scanf("%d",&s.mark3);

	printf("Total=");
	s.total=s.mark1+s.mark2+s.mark3;
	printf("%d",s.total);

	printf("\nPercentage=");
	s.per=s.total*100/300;
	printf("%f",s.per);

getch();
}






