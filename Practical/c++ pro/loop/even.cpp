#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"Times to print";
    cin>>a;

    for (int i = 1; i <= a; i++)
    {
        if(i%2==0)
        {
        cout<<i<<endl;
        }
        
    }

    // for (int i = 1; i <= a; i+2)
    // {
    //  cout<<i<<endl;
    // }

    // for (int i = 1; i <= a; i++)
    // {
    //     if(i%2!=0)
    //     {
    //     cout<<i<<endl;
    //     }
        
    // }
    
return 0;
}