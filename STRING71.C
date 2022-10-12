#include<stdio.h>
#include<conio.h>

void main()
{
int i,sub;
char s1[10],s2[10];
clrscr();

	printf("enter string for s1=");
	scanf("%s",s1);

	printf("enter string for s2=");
	scanf("%s",s2);


	for(i=0;i<s1[i];i++)
	{
	  sub=s1[i]-s2[i];
	  if(s1[i]==s2[i])
	  {
		printf("\nStrings are same=%d",sub);


	  }
	  if(s1[i]<s2[i])
	  {
		printf("\nStrings are not same=%d",sub);

	  }


	  if(s1[i]>s2[i])
	  {

		printf("\nStrings are not=%d",sub);

	  }

	}
getch();
}