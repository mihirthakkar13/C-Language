#include<stdio.h>
#include<conio.h>

struct school
{
struct student
{
	int rollno;
	char name[50];
	int mark[10];
	int total;
	float per;

}st[20];
}sc[20];

void main()
{
int i,n,no,j,k,subject;
clrscr();

	printf("Enter total no school=");
	scanf("%d",&no);

for(i=0;i<no;i++)
{
	printf("\nEnter total no students=");
	scanf("%d",&n);

for(j=0;j<n;j++)
{

	printf("\nEnter roll no=");
	scanf("%d",&sc[i].st[j].rollno);

	printf("Enter name of student=");
	scanf("%s",&sc[i].st[j].name[k]);

	printf("Enter no of subjects=");
	scanf("%d",&subject);

	sc[i].st[j].total=0;
	sc[i].st[j].per=0.0;

for(k=0;k<subject;k++)
{
     printf("enter marks=");
     scanf("%d",&sc[i].st[j].mark[k]);


	sc[i].st[j].total=sc[i].st[j].total+sc[i].st[j].mark[k];

}
	printf("\n Total=%d",sc[i].st[j].total);

	sc[i].st[j].per=sc[i].st[j].total/subject;
	printf("\nPercentage=%f",sc[i].st[j].per);

}
}

getch();
}






