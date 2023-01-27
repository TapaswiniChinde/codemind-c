#include<stdio.h>
int main()
{
	int n,i,c=0,s;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			c=1;
			break;
		}	
	}
	if(c==0)
	{
		printf("False");
	}
	else
    {
    	printf("True");
	}
}
