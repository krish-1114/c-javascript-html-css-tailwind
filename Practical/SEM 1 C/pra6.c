#include<stdio.h>
#include<conio.h>
int main(){
 
    int interest,p,r,n;

    printf("enter the PRN ");
    scanf("%d",&p,&r,&n);

    interest = p*r*n/100;

    printf("interest is :- %d \n",interest);

    return 0;
}