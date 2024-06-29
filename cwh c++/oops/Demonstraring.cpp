#include<iostream>
using namespace std;

class student{
    protected:
        int rollno;
    public:
        void set_number(int a){
                rollno = a;
        }

        void printnumber(void){
            cout<<"Your Roll no is "<<rollno<<endl;
        }
};

class test : virtual public student{
    protected:
        float math,physic;
    public:
        void setmarks(float m1,float m2){
            math = m1;
            physic = m2;
        }

        void printmarks(void){
            cout<<"Your result is here : "<<endl
            <<"maths : "<<math<<endl
            <<"Physics : "<<physic<<endl;

        }
};

class sports : virtual public student{
    protected:
        float score;
    public:
        void setscore(float sc){
            score = sc;
        }

        void printscore(void){
            cout<<"Your Score is : "<<score<<endl;
        }
};

class result : public test,public sports{
    private:
        float total;
    public:
        void display(void){
            total = math + physic + score;
            printnumber();
            printmarks();
            printscore();
            cout<<"Your Total score is : "<<total<<endl;
            cout<<"                                     "<<endl;
            cout<<"           THANK YOU SO MUCH         "<<endl;
            cout<<"                                     "<<endl;

        }

};


int main(){

        result krish;
        krish.set_number(111);
        krish.setmarks(98.4,97.5);
        krish.setscore(94);
        krish.display();

        result abc;
        abc.set_number(112);
        abc.setmarks(98.4,97.5);
        abc.setscore(94);
        abc.display();

        result efg;
        efg.set_number(113);
        efg.setmarks(98.4,97.5);
        efg.setscore(94);
        efg.display();



return 0;
}