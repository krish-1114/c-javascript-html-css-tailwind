#include<stdio.h>
#include<conio.h>
int main(){
    char a;

    printf("enter the value");
    scanf("%c",&a);

    if (a>='A' && a<='Z'){
        printf("Capital",a);
    }
   else if (a>='a' && a<='b')
    {
        printf("Small",a);
    }
    else
    {
        printf("Secial",a);
    }
 
    return 0;
}