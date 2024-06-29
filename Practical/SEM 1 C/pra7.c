#include<stdio.h>
#include<conio.h>
int main(){
    int km,m,feet,inch,cm;

    printf("enter distace in KM");
    scanf("%d",&km);

    m=km*1000;
    feet=km*3280;
    inch=km*39970;
    cm=km*100000;

     printf("meater is %d",m);
     printf("feet is %d",feet);
     printf("inch is %d",inch);
     printf("cm is %d",cm);


    return 0;
}
