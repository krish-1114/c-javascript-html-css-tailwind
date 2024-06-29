#include<iostream>
using namespace std;

template<class T1=int,class T2=float,class T3=char>
class krish{
    public:
        T1 a;
        T2 b;
        T3 c;
        krish(T1 x,T2 y,T3 z){
            a = x;
            b = y;
            c = z;
        }

        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};

int main(){

    krish<> k(12,1.23,'B');
    k.display();
    cout<<endl;
    krish<float,int,char> j(1.233,'b','c');
    j.display();

return 0;
}