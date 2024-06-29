#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the ID" << endl;
        cin >> id;
        count++;
    }

    void getdata(void)
    {
        cout << "The emp.ID is " << id << " and This is emp No " << count;
    }

    static void getcount(void){
        cout<<"The value of count is"<<count<<endl;
        
    }
};

//default value is always 0
// int employee ::count = 1;
int employee ::count;

int main()
{

    employee krish, abc, efg;

    krish.setdata();
    krish.getdata();

    employee::getcount();

    abc.setdata();
    abc.getdata();

    employee::getcount();

    efg.setdata();
    efg.getdata();
    
    employee::getcount();
    
    return 0;
}