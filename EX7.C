#include<stdio.h>
#include<conio.h>
int main()
{
	int k=1,inc=1,n=5,i,j;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			for(j=1;j<=n;j++)
			{
				printf("%d",k);
				k--;
			}
			k=k+(n+1);
		}
		else{
				for(j=1;j<=n;j++)
				{
					printf("%d",k);
					k++;
				}
			k=k+(n-1);
		}
		printf("\n");
	}
	return 0;
}