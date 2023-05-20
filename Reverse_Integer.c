#include<stdio.h>
int main(){
	int n,rev=0,temp;
	scanf("%d",&n);
	while(n!=0){
		temp=n%10;
		rev=rev*10+temp;
		n/=10;
	}
	printf("%d",rev);
}