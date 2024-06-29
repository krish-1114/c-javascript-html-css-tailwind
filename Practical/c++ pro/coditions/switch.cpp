#include<iostream>
using namespace std;
int main(){
int a,b;
char op;
    cout<<"enter two Number :- "<<endl;
    cin>>a>>b;
    cout<<"enter Opretion to performe :- "<<endl;
    cin>>op;
switch (op)
{

case  '+':
    cout<<a + b;
    break;

case '-':
    cout<<a - b;
    break;

case '*':
    cout<<a * b;
    break;

case '/':
    cout<<a / b;
    break;

default:
    cout<<"invalid ";
    break;
}
return 0;
}



// // make calculator
// #include<iostream>
// using namespace std;
// int main(){
// int a,b;
// char op;
//     cout<<"enter two Number :- "<<endl;
//     cin>>a>>b;
//     cout<<"enter Opretion to performe :- "<<endl;
//     cin>>op;
//     if (op == '+') cout<<a+b;
//     if (op == '-') cout<<a-b;
//     if (op == '/') cout<<a/b;
//     if (op == '*') cout<<a*b;
    
// return 0;
// }