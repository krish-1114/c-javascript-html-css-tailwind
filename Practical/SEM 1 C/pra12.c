#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;

    printf("enter the three values");
    scanf("%d%d%d",&a,&b,&c);

    if (a>b && a>c)
    {
        printf("%d is big",a);
    }
   else if (b>a && b>c)
    {
        printf("%d is big",b);
    }
    else
    {
        printf("%d is big",c);
    }
    

    // int result = (a>b) ? (a>c ? a:c) : (b>c ? b:c);
    

    
 
    return 0;
}