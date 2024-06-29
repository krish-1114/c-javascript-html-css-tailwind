#include<iostream>
using namespace std;

// destructor never takes an argument or return a value

int count=0;

class num
{
private:
    /* data */
public:
    num(){
        count++;
         cout<<"This is the time when the constructor called"<<count<<endl;
    }
      ~num(){
        cout<<"this is the time when distor called"<<count<<endl;
        count--;
      }
};

int main(){

    cout<<"We are inside our main funtion"<<endl;
    cout<<"Creating first object n1"<<endl;

    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }

    cout<<"back To main"<<endl;
    
return 0;
}