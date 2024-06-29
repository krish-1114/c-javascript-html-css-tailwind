#include<stdio.h>
#include<conio.h>
int main(){
    int a;

    printf("enter the value");
    scanf("%d",&a);

    if (a>0)
    {
        printf("Positiv",a);
    }
   else if (a<0)
    {
        printf("Nagative",a);
    }
    else
    {
        printf("Zero",a);
    }
 
    return 0;
}