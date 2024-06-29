#include<iostream>
using namespace std;
int a = 100;
int main(){
    int a = 10;
    cout<<::a;  
    // scope resolution opretor :: if you don't write this the local variable will be run a = 10 and if you write it then a = 100   
return 0;
}