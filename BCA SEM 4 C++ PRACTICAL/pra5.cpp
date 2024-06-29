#include<iostream>
using namespace std;

int sum(int a,int b,int c = 7){
    return a + b + c;                //--- CORRECT
}        


// int sum(int a,int c = 7,int b){
//      return a + b + c;         //       --- WRONG
// }


int main(){
    int a = 12;
    int b = 13;
    cout<<sum(a,b);

return 0;
}