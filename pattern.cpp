#include<stdio.h>
int main()
{
	int n,i,j,a;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a=1;
		for(j=0;j<=i;j++)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
}
