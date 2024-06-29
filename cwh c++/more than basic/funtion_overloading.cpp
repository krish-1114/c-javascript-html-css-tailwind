#include<iostream>
using namespace std;

int sum(int a,int b){
    cout<<"2 argumunts "<<endl;
    return a+b;
}

int sum(int a,int b,int c){
    cout<<"3 argumunts "<<endl;
    return a+b+c;
}

int main(){
cout<<"the sum of 3 + 6 = "<<sum(3,6)<<endl;
cout<<"the sum of 3 + 6 + 7 = "<<sum(3,6,7)<<endl;
return 0;
}

