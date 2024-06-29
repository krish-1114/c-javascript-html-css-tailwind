#include<stdio.h>
#include<conio.h>
int main(){
 
    int r,pi=3.14,area;

    printf("enter the radius ");
    scanf("%d",&r);

    area = pi*r*r;

    printf("Area of circle is :- %d\n",area);

    return 0;
}