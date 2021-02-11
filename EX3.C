#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n=5;
	clrscr();
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		 printf("\n");
	}
	return 0;
}