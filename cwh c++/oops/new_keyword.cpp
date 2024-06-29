#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int *ptr = &a;
    cout << "The vale of a is "<<(*ptr)<<endl;

    // New 

    int *p = new int (4);
    cout << "The vale of at address p is "<<(*p)<<endl;

    int *arr = new int[3];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    delete arr;

    cout << "The vale of arr[0] is "<<arr[0]<<endl;
    cout << "The vale of arr[0] is "<<arr[1]<<endl;
    cout << "The vale of arr[0] is "<<arr[2]<<endl;

    //delete opretor

    

return 0;
}