#include <stdio.h>
#include <conio.h>

void main()
{

int a,i,j,space,k;
clrscr();

		printf("enter rows=");
		scanf("%d",&a);
		space=a*2-2;

						
				for(i=1;i<=a;i++)
				{
							
						for(k=1;k<=space;k++)
						{
							printf(" ");
						}
								
							space=space-2;

								
								for(j=1;j<=i;j++)
								{
									printf(" *  ");
								}

									printf("\n");

				}


		space=2;

								for(i=a-1;i>-1;i--)
								{

						
						for(k=1;k<=space;k++)
						{
							printf(" ");
						}

							space=space+2;

				
				for(j=1;j<=i;j++)
				{
					printf(" *  ");
				}
				
					printf("\n");

								
								}
								
getch();

}






















