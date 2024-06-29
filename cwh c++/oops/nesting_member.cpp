#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "enter a binary number"<<endl;
    cin >> s;
}

void binary ::chk_bin(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incoorect Binary"<<endl;
            exit(0);
        }
    }
}

void binary :: ones(void)
{    
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0' )
        {
            s.at(i) = '1';
        }
      else if (s.at(i) == '1' )
        {
            s.at(i) = '0';
        }
    }
}

void binary :: display(void){

    cout<<"Number ----------------"<<endl;

     for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    } 

    cout<<endl;


}


int main()
{

    binary b;
    b.read();
    // b.chk_bin();
    b.ones();
    b.display();

    return 0;
}