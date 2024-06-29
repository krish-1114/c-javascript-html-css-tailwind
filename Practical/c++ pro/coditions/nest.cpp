#include<iostream>
using namespace std;
int main(){
int a,b,c;
    cout<<"enter Three Numbers :- ";
    cin>>a>>b>>c;
   if (a>b)
   {
        if (a>c)
        {
            cout<<a<<" is greatest";
        }
        else{
            cout<<c<<" is greatest";
        }
   }
   else{
        if (b>c)
        {
            cout<<c<<" is greatest";
        }
        else{
            cout<<c<<" is greatest";
        }
        
   }
   
    
return 0;
}