// a + b > c && b + c > a && c + a > b
#include<iostream>
using namespace std;
int main(){
int a,b,c;
    cout<<"enter Three Numbers :- ";
    cin>>a>>b>>c;
    if ( (a + b) > c && (b + c) > a && (c + a) > b)
    {
        cout<<"tringle";
    }
    else
    {
        cout<<"Not a tringle";
    }
    

return 0;
}