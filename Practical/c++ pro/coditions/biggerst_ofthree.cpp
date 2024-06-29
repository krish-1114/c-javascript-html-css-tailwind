#include<iostream>
using namespace std;
int main(){
int a,b,c;
    cout<<"enter Three Numbers :- ";
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        cout<<"1st is biggest :- "<<a<<endl;
    }
    else if (b>a && b>c)
    {
        cout<<"2nd is biggest :- "<<b<<endl;
    }
    else
    {
        cout<<"3rd is biggest :- "<<c<<endl;
    }
    
return 0;
}