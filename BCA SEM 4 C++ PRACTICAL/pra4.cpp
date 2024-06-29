// if there is only one statement in the funtion you can use it to save the time
#include<iostream>
using namespace std;

inline void fun(){
    cout<<"inline--";
}

int main(){
    
    fun();
    fun();
    fun();

return 0;
}