#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= n ; j++)
    {
        cout<<j; // cout<<n-j+1;
    }
    cout<<endl;
}


return 0;
}