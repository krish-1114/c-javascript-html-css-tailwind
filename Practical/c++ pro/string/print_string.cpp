#include<iostream>
using namespace std;
int main(){
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // size is 13 but last one is null - extra char which show the string end
    int n = s.length();

    for(int i=0;i<n;i++){
        cout<<s[i];
    }

return 0;
}