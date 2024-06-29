#include<iostream>
using namespace std;

class base{
    public:
    int var_base;
    void display(){
        cout<<"Displaying Base class "<<var_base<<endl;
    }

};

class derivedclass : public base{
public:
    int var_derived;
    void display(){
        cout<<"Displaying Base class variable var base"<<var_base<<endl;
        cout<<"Displaying Base class variable var derived"<<var_derived<<endl;
    }

};


int main(){
    base *basepointer;
    base obj_base;
    derivedclass obj_derived;
    basepointer = &obj_derived;    

    basepointer->var_base = 34; 
    // basepointer->var_derived = 34; 
    basepointer->display();

return 0;
}