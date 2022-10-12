#include <stdio.h>
#include <conio.h>
void main()
{
int i,a;
clrscr();
i=1;
	
	printf("enter no=");
	scanf("%d",&a);

	while(i<=10)
	{
		printf("%d*%d=%d\n",a,i,a*i);
		i++;
       
	}
	
getch();
}