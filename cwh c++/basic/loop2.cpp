#include<iostream>
using namespace std;
int main(){

    int my_num[]={2,3,4,5,6};

    for (int i = 0; i < 5; i++)
    {
        cout << my_num[i] <<endl;
    }
    
    cout<<"---------------------"<<endl;

    for(int i:my_num)
    {
        cout<<i<<endl;
    }

    cout<<"---------------------"<<endl;
    
return 0;
}