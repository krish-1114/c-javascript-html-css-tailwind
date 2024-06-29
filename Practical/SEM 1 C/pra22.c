#include<stdio.h>
int main(){
    int n,i;
    printf("all prime nos");
    for ( n = 1; n <= 100; n++)
    {
        for ( i = 2; i <= n/2; i++)
        {
            if (n%i==0)
            {
                break;
            }
            if (i>n/2)
            {
                printf("%d",n);
            }
                   
        }
        
    }
    
}