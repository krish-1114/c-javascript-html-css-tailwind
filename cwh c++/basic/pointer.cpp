#include<iostream>
using namespace std;
int main(){

int a=43; 
int *b = &a;

// & --> used to show address of oprator
cout<<"The add. &a "<<&a<<endl;
cout<<"The add. b "<<b<<endl;

cout<<"------------------------------"<<endl;
cout<<endl;
cout<<endl;

// * --> used to show value of oprator
cout<<"The value is *b "<<*b<<endl;

cout<<"------------------------------"<<endl;
cout<<endl;
cout<<endl;

// Pointer to pointer
int **c =&b;
cout<<"The add. is &b "<<&b<<endl; //ox123
cout<<"The add. is c "<<c<<endl;    //ox123
cout<<"The add. is *c "<<*c<<endl;  //ox123
cout<<"The add. is **c "<<**c<<endl; //43


return 0;
}