#include<stdio.h>
int main(){
    int n,i,s=0;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            s=i+s;
        }
    }
    printf("%d",s);
}