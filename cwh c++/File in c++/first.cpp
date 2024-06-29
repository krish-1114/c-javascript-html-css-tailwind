#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream kout("krish.txt");
    cout<<"enter your name :- ";
    string name;
    cin>>name;

    kout<<"Your name is  " + name;
    kout.close();

    ifstream kin("krish.txt");
    string content;
    getline(kin,content);
    // kin>>content;
    cout<<"The content of the file is "<<endl;
    cout<<content;
    kin.close();

return 0;
}
