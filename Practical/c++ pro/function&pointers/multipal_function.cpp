#include<iostream>
using namespace std;

void india(){
        cout<<"You are in India\n";

}
void usa(){
        cout<<"You are in USA\n";
        india();
}


int main(){
      usa();   
return 0;
} 