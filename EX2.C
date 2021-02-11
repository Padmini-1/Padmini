#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n=5;
	clrscr();
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;

}