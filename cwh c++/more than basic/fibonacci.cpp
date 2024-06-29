#include<iostream>
using namespace std;

int fib(int a){
    if(a<2){
        return 1;
    }
    return fib(a-2) + fib(a-1); 
}

int main(){

int a;
cin>>a;

fib(a);
cout<<fib(a);

return 0;
}