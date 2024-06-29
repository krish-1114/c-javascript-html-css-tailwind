#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int a=3, b=78,c=9;
cout<<"The Value of A is "<<a<<endl;
cout<<"The Value of b is "<<b<<endl;
cout<<"The Value of c is "<<c<<endl;

cout<<"The Value of A is "<<setw(4)<<a<<endl;
cout<<"The Value of b is "<<setw(4)<<b<<endl;
cout<<"The Value of c is "<<setw(4)<<c<<endl;


return 0;
}