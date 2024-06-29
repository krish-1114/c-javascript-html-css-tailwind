#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"enter Number :- ";
  cin>>a;
  int b = 3;
  for (int i = 1; i <= a; i++)
  {
    cout<<b<<" ";
    b = b * 4;
  }
  
return 0;
}