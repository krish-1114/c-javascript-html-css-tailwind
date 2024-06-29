#include<stdio.h>
#include<conio.h>
int main(){
    
    int l,b,h,rect,cube,trin;

    printf("enter Length,Breadth and Height");
    scanf("%d%d%d",&l,&b,&h);

    rect = l*b*h;
    cube = l*l*l;
    trin =(l*b)*0.5;

    printf("The area of rectangle is :- %d",rect);
    printf("The area of cube is :- %d",cube);
    printf("The area of tringle is :- %d",trin);


    return 0;
}