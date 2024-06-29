// take a input and print how many digit are there 
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a Number :- ";
    cin>>a;
 
    if(a<=9)
    {
        cout<<"One digit Number :- ";
    }
    else if(a>9 and a<99)
    {
        cout<<"Two digit Number :- ";
    }
   else if(a>99 and a<=999)
    {
        cout<<"Three digit Number";
    }
    else if(a>999 && a<=9999)
    {
        cout<<"Four digit Number";
    }
    else if(a>9999 && a<=99999)
    {
        cout<<"Five digit Number";
    }
    else
    {
        cout<<"More then five digits";
    }
 
 
return 0;
}