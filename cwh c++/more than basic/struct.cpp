#include<iostream>
using namespace std;

struct employee
{
    /* data */
    int eid;
    char favchar;
    float salary;
};


int main(){

    struct employee krish;
    krish.eid = 1;
    krish.favchar ='k';
    krish.salary = 6500000000;

    cout<<krish.salary<<endl;

    struct employee abc;
    abc.eid = 2;
    abc.favchar ='a';
    abc.salary = 6500000;

    cout<<abc.salary<<endl;
    
    struct employee efg;
    efg.eid = 3;
    efg.favchar ='a';
    efg.salary = 6500000;

    cout<<efg.salary<<endl;

return 0;
}