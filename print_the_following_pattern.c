#include<stdio.h>
void pattern2(int n)
{
	int i,j;
	for(i=1;i<n+1;i++)
	{
		for(j=1;j<i+1;j++)
		{
			printf("%d",j);
		}
		printf("
");
	}
}
int main()
{

int n;
scanf("%d",&n);
pattern2(n);
}