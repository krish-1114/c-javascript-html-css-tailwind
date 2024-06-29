#include<iostream>
using namespace std;

inline int pro(int a,int b){
    static int c=0;
    c = c + 1;
    return a*b+1;
}

int intereat(int cm,float factor = 1.04){
    return cm * factor;  
}

int main(){
// int a,b;
// cout<<"ENter a and b value "<<endl;
// cin>>a>>b;

// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
// cout<<"The produc is"<<pro(a,b)<<endl;
int money = 100000;
cout<<money<<intereat(money);

return 0;
}