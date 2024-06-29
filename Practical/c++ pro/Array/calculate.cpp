#include<iostream>
using namespace std;
int main(){
    int x[5],sum = 0;

    cout<<"Enter the digits to sum them : ";

    cout<<endl;

    for (int i = 0; i <= 4; i++)
    {
        cin>>x[i];
    }
    
    for (int i = 0; i <= 4; i++)
    {
        sum += x[i];
    }
    

    cout<<"The sum of an arry is : "<<endl;
    cout<<sum;



return 0;
}