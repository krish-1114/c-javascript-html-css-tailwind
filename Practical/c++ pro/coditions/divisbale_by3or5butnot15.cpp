#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a Number :- ";
    cin>>a;
    if ( ( a%5==0 || a%3==0 ) && a%15!=0)
    {
        cout<<"divisable";
    }
    else
    {
        cout<<"not divisable";
    }
 
return 0;
}