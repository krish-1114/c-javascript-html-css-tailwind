#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int a = 4;
    for(int i=4;i<=n;i++){
        cout<<a<<" ";
        a=+3;
    }
return 0;
}
    // --------------------- Method 1
    
    // int n;
    // cout<<"Enter n : ";
    // cin>>n;
    // for(int i=4;i<=3*n-1;i+=3){
    //     cout<<i<<" ";
    // }