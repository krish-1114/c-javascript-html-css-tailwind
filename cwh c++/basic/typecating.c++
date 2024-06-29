#include<iostream>
using namespace std;
int main(){

int  a = 45;
float b = 45.56;

cout<<"The value of A is  "<<(float)a<<endl;
cout<<"The value of B is  "<<(int)b<<endl;

int c = int(b);

cout<<"The value of C is "<<c<<endl;

cout<<"the expession "<<a+b<<endl;
cout<<"the expession "<<a+int(b)<<endl;
cout<<"the expession "<<a+(int)b<<endl;
return 0;
}