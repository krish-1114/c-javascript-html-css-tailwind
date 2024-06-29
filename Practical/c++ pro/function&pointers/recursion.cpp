#include<iostream>
using namespace std;
int greet(){
    cout<<"Good Morning"<<endl;
    greet();
}
int main(){
    greet();
return 0;
}