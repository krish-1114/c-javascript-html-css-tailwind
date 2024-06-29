#include<iostream>
using namespace std; 

class Animal
{
    private:
        string name;
        int age;

    public:
        string catagory;
        int pre_age; 
        
        void setdata(string name,int age);    // Declaration
        void getdata(){
            cout<<"Name of Animal :- "<<name<<endl;
            cout<<"How much time it leave(age) :- "<<age<<endl;
            cout<<"What is category of Animal :- "<<catagory<<endl;
            cout<<"What is present age of animal :- "<<pre_age<<endl;
        }
};

void Animal :: setdata(string name,int age){
    
    name = name;
    age = age;

}


int main(){

    Animal dog;
    dog.catagory = "animal";
    dog.pre_age = 4;
    dog.setdata("Tommy",30);
    dog.getdata();

cout<<"--------------------"<<endl;

    Animal cat;
    cat.catagory = "animal";
    cat.pre_age = 2;
    cat.setdata("cutiii",15);
    cat.getdata();

cout<<"--------------------"<<endl;

    Animal sparrow;
    sparrow.catagory = "Bird";
    sparrow.pre_age = 1;
    sparrow.setdata("abc",10);
    sparrow.getdata();
    
    
return 0;
}