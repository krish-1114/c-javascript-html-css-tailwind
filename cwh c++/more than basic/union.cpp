#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eid;        // 4 byte
    char favchar;   // 1 byte
    float salary;   // 4 byte
} ep;               // total 9 byte


union money // better in memory management
{
    /* data */
    int rice;       // 4 byte        
    char car;       // 1 byte
    float pounds;   // 4 byte
};               // total 4 byte ( max amount )



int main(){

    

    ep krish;
    union money m1;
    m1.rice = 34;
    m1.car = 'c'; // rice value change 
    cout<<m1.car<<endl;    
    cout<<m1.rice<<endl;

return 0;
}