#include<iostream>
using namespace std;
int greet(int n){
 if(n==0) return 0;   // if(n==9) return 0; 
  cout<<n<<endl;     // cout<<n<<endl;
   greet(n-1);      // greet(n+1);

}
int main(){
    greet(1);
return 0;
}

// 8:26:23