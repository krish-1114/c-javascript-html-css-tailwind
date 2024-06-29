#include<iostream>
using namespace std;

int main(){
char ch = '1';
int num = 1;

cout << endl;

switch (ch)
{
case 1: 
    cout << "First" <<endl;
    cout << "first again"<<endl;
    break;

case '1':
    switch(num){
    case 1: cout<<"value of num inner is "<<num << endl;
    break;
}
    cout<<"outer "<<endl;
    break;

default: 
    cout << " defualt case " <<endl;
    break;
}

return 0;
}