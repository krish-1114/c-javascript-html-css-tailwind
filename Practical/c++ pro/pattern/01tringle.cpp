#include<iostream>
using namespace std;
int main(){ 
    int m,n;
    cout<<"Enter no of rows and cols :- "<<endl;
    cin>>m;

    for (int i = 1; i <= m; i++) // this loop is for rows
    {
        for (int j = 1; j <= i; j++) // This loop is for cols 
        {
            if((i+j)%2==0)
            cout<<1<<" ";
        }
        cout<<endl;
    }  
                       

return 0;
}