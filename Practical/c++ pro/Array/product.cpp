#include<iostream>
using namespace std;
int main(){
    int x[5],multi = 1;

    cout<<"Enter the digits to sum them : ";

    cout<<endl;

    for (int i = 0; i <= 4; i++)
    {
        cin>>x[i];
    }
    
    for (int i = 0; i <= 4; i++)
    {
        multi *= x[i];
    }
    

    cout<<"The sum of an arry is : "<<endl;
    cout<<multi;



return 0;
}