#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N  :- ";
    cin>>n;
    for (int i = n/2; i >= 1; i--){
        if (n%i == 0)
        {
            cout<<i<<" ";
           break;  
        }
    }    
    
return 0;
} 
    // cout<<"Enter N  :- ";
    // cin>>n;
    // int f = 1;
    // for (int i = 1; i < n; i++){
    //     if (n%i == 0)
    //     {
    //         f=i; 
    //     }
    // }    
    //     cout<<f;