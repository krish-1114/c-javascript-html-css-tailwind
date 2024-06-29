#include<stdio.h>

int main(){
    int sum,sub,div,multi,a,b;

    printf("enter value 1 and 2 :- ");
    scanf("%d%d",&a,&b);

    sum = a + b;
    sub = a - b;
    multi = a * b;
    div = a / b;

    printf("Sum is : %d\n",sum);
    printf("Sub is : %d\n",sub);
    printf("multi is : %d\n",multi);
    printf("div is : %d\n",div);
 
    return 0;
}