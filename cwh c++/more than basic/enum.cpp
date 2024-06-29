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

    enum meal
    {
        brekfast , lunch , dinner
    }; 

    meal m1 = brekfast;
    meal m2 = lunch;

    cout<<m1;
    cout<<m2;



    // cout<<brekfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    

return 0;
}