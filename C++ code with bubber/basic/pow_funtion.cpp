#include<iostream>
using namespace std;

int pow(){
int a,b;
cin>>a>>b;
int ans = 1;
for (int i = 1; i <= b; i++)
{
    ans = ans * a;
}
cout<<"ans is "<<ans <<endl;
}

int main(){

pow();
pow();
pow();

return 0;
}