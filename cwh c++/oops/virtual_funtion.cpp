#include<iostream>
using namespace std;

class base{
    public:
    int var_base;
 virtual void display(){
        cout<<"1 Displaying Base class "<<var_base<<endl;
    }

};

class derivedclass : public base{
public:
    int var_derived;
    void display(){
        cout<<"2 Displaying Base class variable var base"<<var_base<<endl;
        cout<<"2 Displaying Base class variable var derived"<<var_derived<<endl;
    }

};

int main(){

    base *basepointer;
    base obj_base;
    derivedclass obj_derived;

    basepointer = &obj_derived;
    basepointer->display();

return 0;
}