#include<stdio.h>
int main(){
    int n,co=0,i;
    printf("enter the no");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        co++;
    }
    if(co==2)
    printf("prime no");
    else
    printf("NOT prime number");
    return 0;
}