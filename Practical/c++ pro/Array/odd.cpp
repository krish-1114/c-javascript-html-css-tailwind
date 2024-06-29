#include<iostream>
using namespace std;
int main(){
    int x[5]={1,2,3,4,5},squre;
   
    for (int i = 0; i <= 4; i++)
    {
        if (x[i]%2 == 0)
        {
            cout<<x[i] + 10<<" ";
        }
        else{
            cout<<x[i] - 10<<" ";
        }
        
    }
    
    
    
return 0;
}