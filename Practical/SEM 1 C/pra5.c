#include<stdio.h>
#include<conio.h>
int main(){
 
    int r,pi=3.14,area,volume;

    printf("enter the radius ");
    scanf("%d",&r);

    area = 4*pi*r*r;
    volume = 4/3*pi*r*r*r;

    printf("Area of sphere is :- %d\n",area);
    printf("Volume of sphere is :- %d\n",volume);

    return 0;
}