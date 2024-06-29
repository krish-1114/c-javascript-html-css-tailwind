#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend complex sumcompl(complex o1, complex o2); // frined funtion is only allow to acces privet class

    void printnumber()
    {
        cout << " Your number is " << a << " + " << b << endl;
    }
};

complex sumcompl(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{

    return 0;
}