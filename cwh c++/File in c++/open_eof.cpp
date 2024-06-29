#include<iostream>
#include<fstream>
using namespace std;
int main(){

    ofstream out;
    out.open("abc.txt");
    out<<"This is me"<<endl;
    out<<"This is me also"<<endl;
    out<<"This is me also"<<endl;
    out.close();

    ifstream in;
    string st,st2;
    in.open("abc.txt");
    in>>st>>st2;
    cout<<st<<st2;

    while (in.eof() == 0)
    {
        getline(in,st);
        cout<<st<<endl;
    }

    in.close();
    
return 0;
}