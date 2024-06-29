#include<iostream>
using namespace std;
int main(){
int n,r = 0 ;
cout<<"Enter number :- "<<endl;
cin>>n;
while (n!=0)
{
    int ld = n%10;
    r = r * 10;
    r += ld;
    n/=10; 
}
cout<<r;

return 0;
} 