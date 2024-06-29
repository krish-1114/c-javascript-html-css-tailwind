#include <iostream>
using namespace std;

// base class
class employee
{
    int id;

public:
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
};

// deriverd class
/*

 class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
 {
     class member/method/etc..
 };

1.default visibilty mode is privet
2.Privet Visibility mode: public member be privet member
3.public visibility mode: public muber be public
4.privet member never be inherit
*/

// creating a programmer class derived from employee base class

class programmer : employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int laguagecode = 9;
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee krish(1), abc(2);
    cout << krish.salary << endl;
    cout << abc.salary << endl;

    programmer skillf(10);
    cout << skillf.laguagecode << endl;
    skillf.getdata();

    return 0;
}
