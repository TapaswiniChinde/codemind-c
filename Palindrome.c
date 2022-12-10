#include<stdio.h>    //reverse of the number palindrome
int main()
{
	int n,r,rev=0,temp;
	scanf("%d",&n);  //121
	temp=n;  //121 
	while(n!=0)
	{
		r=n%10;        
		rev=rev*10+r;  
		n=n/10;
	}
	
		if(rev==temp)
		{
			printf("True");
		}
		else
		{
			printf("False");
		}
	
	
}