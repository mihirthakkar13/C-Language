#include<stdio.h>
#include<conio.h>

struct student
{
	int rollno;
	int mark1,mark2,mark3,total;
	float per;

}s[10];
void main()
{
int i,n,rollno;
clrscr();

	printf("enter total no of students=");
	scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("\nenter roll no=");
	scanf("%d",&rollno);


	printf("Enter mark1=");
	scanf("%d",&s[10].mark1);

	printf("Enter mark2=");
	scanf("%d",&s[10].mark2);

	printf("Enter mark3=");
	scanf("%d",&s[10].mark3);

	printf("Total=");
	s[10].total=s[10].mark1+s[10].mark2+s[10].mark3;
	printf("%d",s[10].total);

	printf("\nPercentage=");
	s[10].per=s[10].total*100/300;
	printf("%f\n",s[10].per);
}
getch();
}



