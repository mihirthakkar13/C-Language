#include<stdio.h>
#include<conio.h>

struct student
{
	int rollno[10];
	char name[10];
	int mark[10];
	int total[10];
	float per[10];

}s[20];


void main()
{
int i,j,n,subject;
s[i].name[j]=0;
s[i].per[j]=0;


clrscr();

	printf("Enter total no of students=");
	scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\nEnter name=");
	scanf("%s",&s[i].name[j]);

	printf("\nEnter roll no=");
	scanf("%d",&s[i].rollno[j]);

	printf("Enter total subjects=");
	scanf("%d",&subject);


for(j=0;j<subject;j++)
{
	printf("Enter marks=");
	scanf("%d",&s[i].mark[j]);

	s[i].total[j]=s[i].total[j]+s[i].mark[j];

}

	printf("\nTotal=%d",s[i].total[j]);
	s[i].per[j]=s[i].total[j]/subject;
	printf("\nPercentage=%f",s[i].per[j]);


}

getch();
}

