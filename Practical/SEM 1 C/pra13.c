#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;

    printf("enter the three values");
    scanf("%d%d%d",&a,&b,&c);

    int result = (a>b) ? (a>c ? a:c) : (b>c ? b:c);

    printf("Max vlaue is %d ",result);    

    
 
    return 0;
}