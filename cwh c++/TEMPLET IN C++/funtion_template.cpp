#include<iostream>
using namespace std;

// float funcAvg(int a,int b){
//     float avg = (a+b)/2;
//     return avg; 
// }

// float funcAvg2(int a,float b){
//     float avg = (a+b)/2.0;
//     return avg; 
// }

template <class t1,class t2>
float funcAvg2(t1 a,t2 b){
    float avg = (a+b)/2.0;
    return avg; 
}

int main(){
    float a;
    a = funcAvg2(8,3.0);
    cout<<"The avg is:- "<<a<<endl;

return 0;
}