#include<iostream>
using namespace std;
    int sum(int a,int b){
        return a + b;
    }
int main(){
    int a,b;
    cout<<"ENter two number\n";
    cin>>a>>b;
    cout<<sum(a,b);
    return 0;
}