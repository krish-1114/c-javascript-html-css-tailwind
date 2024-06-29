#include<stdio.h>
#include<conio.h>
int main(){
    int days,year,month,rd,weeks;

    printf("enter days");
    scanf("%d",&days);

    year=days/365;
    weeks=(days%365)/7;
    rd=(days%365)%7;

    printf(" year = %d",year);
    printf(" week = %d",weeks);
    printf(" rd = %d",rd);

    return 0;
}