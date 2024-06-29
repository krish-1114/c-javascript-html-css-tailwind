#include<iostream>
using namespace std;
int main(){

int mark[]={6,2,3,4};
int* p = mark;
// cout<<"Value of is *p++ before "<<*p++<<endl;
// cout<<"Value of is *p++ after "<<*p<<endl;

// cout<<"Value of is *p  "<<*++p<<endl;


cout<<"---------------------"<<endl;
cout<<endl;

for (int i = 0; i < 4; i++)
{
    cout<<"The value of marks "<<i<<"is "<<mark[i]<<endl;
}

cout<<"---------------------"<<endl;
cout<<endl;

cout<<&mark<<endl;
cout<<&mark[1]<<endl;

cout<<"---------------------"<<endl;
cout<<endl;

cout<<"The value of mark is mar[0]"<<*p<<endl; // this p means arr[1] that why it is
cout<<"The value of mark is  mar[1]"<<*(p+1)<<endl; // 1+1 = 2
cout<<"The value of mark is  mar[2]"<<*(p+2)<<endl;  // 1+2 = 3
cout<<"The value of mark is  mar[3]"<<*(p+3)<<endl;  // 1+3 = 4

// cout<<"The value of mark is "<<*p; 
// cout<<"The value of mark is "<<*p; 
// cout<<"The value of mark is "<<*p; 



return 0;
}