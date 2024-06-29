#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter cost price :- "<<endl;
    cin>>cp;
    cout<<"enter sell price :- "<<endl;
    cin>>sp;

    if (cp<sp)
    {
        cout<<"Profit Rs:- ";
        cout<<sp-cp;
    }
    else if (sp<cp)
    {
        cout<<"loss Rs:- "<<cp-sp;
        
    }
    else
    {
        cout<<"No Profit No loss"<<endl;
    }
    
    
return 0;
}