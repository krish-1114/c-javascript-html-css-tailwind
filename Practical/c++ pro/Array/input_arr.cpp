// list of integers,char,float os called array
#include<iostream>
using namespace std;
int main(){
    int x[5];
    cout<<endl;
    for (int i = 0; i <= 4; i++)
    {
        cin>>x[i];
    }

    cout<<"----------------------";

    cout<<endl;

     for (int i = 0; i <= 4; i++)
    {
        cout<<x[i]<<" ";
    }

return 0;
}