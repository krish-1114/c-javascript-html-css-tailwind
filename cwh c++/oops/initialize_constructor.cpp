#include <iostream>
using namespace std;

class test
{
    int a;
    int b;

public:

    // test(int i, int j) : a(i), b(j + i)
    // test(int i, int j) : a(i), b(j * 2)
    // test(int i, int j) : a(i), b(a * j)
    // test(int i, int j) : b(j) , a(i + b) -- if you write int b that int a then it will not return garbej value 
    test(int i, int j) : a(i), b(j + i)
    {
        cout<<"constructor executed"<<endl;
        cout<<"Value of A is"<<a<<endl;
        cout<<"Value of B is"<<b<<endl;
    } 

};

 main(){
    test t(4,5);
}