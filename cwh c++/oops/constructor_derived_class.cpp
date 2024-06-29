#include<iostream>
using namespace std;

class base{
    int data;
    public:
        base(int i){
            data = i;
            cout<<"base class constructor called"<<endl;
        }

        void printdata1(void){
            cout<<"The value of data1 is"<<data<<endl;
        }    
};

class base2{
    int data2;
    public:
        base2(int i){
            data2 = i;
            cout<<"base class constructor called"<<endl;
        }

        void printdata2(void){
            cout<<"The value of data2 is"<<data2<<endl;
        }    
};

class derived : public base2,public base{
        int derived1,derived2;
    public:
        derived(int a,int b,int c,int d): base2(b),base(a){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;
        }

        void printdata3(void){
            cout<<"The value of derived1 is"<<derived1<<endl;
            cout<<"The value of derived2 is"<<derived2<<endl;
        }
        
};

int main(){

    derived krish(1,2,3,4);
    krish.printdata1();       
    krish.printdata2();       
    krish.printdata3();       

return 0;
}