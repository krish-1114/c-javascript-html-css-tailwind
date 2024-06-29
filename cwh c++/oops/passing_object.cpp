#include<iostream>
using namespace std;

class employee
{
private:
    int id;
    int salary;
public:
    void setid(void){
        salary = 112;
        cout<<"Enter id"<<endl;
        cin>>id;
    }
    void getid(void){
        cout<<"The id is"<<id<<endl;
    }
};


int main(){
    
    employee fb[4];
    
        for (int i = 0; i < 4; i++)
        {
            fb[i].setid();
            fb[i].getid();
        } 
        

    // employee krish, abc, efg;

    // krish.setid();
    // krish.getid();

    // // employee::getcount();

    // abc.setid();
    // abc.getid();

    // // employee::getcount();

    // efg.setid();
    // efg.getid();
    
    // employee::getcount();


return 0;
}