#include<stdio.h>
#include<conio.h>

struct student
{

	int n[100],rollno[100];
	int mark1[100],mark2[100],mark3[100];
	int total[100];
	float per[100];
}s;

void main()
{
int i,a[10],n;
clrscr();
	printf("enter total no of students=");
	scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("\nenter roll no=");
	scanf("%d",a[i]);


	printf("Enter mark1=");
	scanf("%d",&s.mark1[i]);

	printf("Enter mark2=");
	scanf("%d",&s.mark2[i]);

	printf("Enter mark3=");
	scanf("%d",&s.mark3[i]);

	printf("Total=");
	s.total[i]=s.mark1[i]+s.mark2[i]+s.mark3[i];
	printf("%d",s.total[i]);

	printf("\nPercentage=");
	s.per[i]=s.total[i]*100/300;
	printf("%f\n",s.per[i]);
}



getch();
}
