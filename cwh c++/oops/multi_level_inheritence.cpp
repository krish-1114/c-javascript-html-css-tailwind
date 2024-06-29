#include<iostream>
using namespace std;

class student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void student :: set_roll_number(int r){
    roll_number = r; //111 (1)
}

void student :: get_roll_number(){
    cout<<"The roll no is "<<roll_number<<endl; // 111 
}

class exam:public student{
    protected:
        float math;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};

void exam :: set_marks(float m1,float m2){                                                                             
    math = m1;  // 99
    physics = m2; // 98 (2)
}

void exam :: get_marks(){          
    cout<<"The marks in math : "<<math<<endl;    // 99
    cout<<"The marks in physic : "<<physics<<endl;   // 98
}

class result : public exam{
    float persantage;
    public:
        void display(){
            get_roll_number(); // (3)
            get_marks();    // (4)
            cout<<"Your PR is "<<(math + physics)/2<<endl;
        }
};

int main(){

        result krish;
        krish.set_roll_number(111);
        krish.set_marks(99,98);
        krish.display();

return 0;
}