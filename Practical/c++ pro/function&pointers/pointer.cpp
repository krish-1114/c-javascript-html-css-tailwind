#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int *p ;
    p = &x;

    int *ptr = &x;
    *ptr = 23 ;

    cout<<"X  is :- "<<x<<endl;
    cout<<"&x is :- "<<&x<<endl;
    cout<<"P  is :- "<<p<<endl;
    cout<<"*P is :- "<<*p<<endl;
    cout<<"&P is :- "<<&p<<endl;

    cout<<"*************************"<<endl;
    cout<<"*ptr is :- "<<*ptr; // chage the x value


return 0;
}