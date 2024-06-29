#include<iostream>
using namespace std;
int main(){
    int n = 4;
    if ((n&1) == 0)
        cout<<"even";
    else 
        cout<<"odd";
return 0;
}