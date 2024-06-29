#include<iostream>
using namespace std;
int main(){
 int a;
    cout<<"enter Marks of student :- "<<endl;
    cin>>a;

   
  if (a>=81 && a<=100)
   {
        cout<<"very good";
   }
   else if (a>=61)
   {
        cout<<"good";    
   }
   else if (a>=41)
   {
        cout<<"good";    
   }
   else 
   {
        cout<<"fail";    
   }
   
    
return 0;
}