#include<iostream>
using namespace std;
int main(){
    int x[5],squre;

   cout<<"Enter the digits to sum them : ";
   cout<<endl;

    for (int i = 0; i <= 4; i++)
    {
        cin>>x[i];
    }

   for (int i = 0; i < 5; ++i) {
        cout <<" "<<x[i] * x[i];
    }

    
    
    
return 0;
}