#include<iostream>
using namespace std;

int swap(int& a,int& b){
    a = a + b;
    b = a - b;
    a = a - b;
}

// int swap(int a,int b){
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     cout<<"a is "<<a<<endl;
//     cout<<"b is "<<b;
// }

int main(){
    int a,b;
    cout<<"Enter a and b num :- "<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b;

return 0;
}