#include<iostream>
#include<cmath> // Include cmath header for pow() function
using namespace std;

class bankdepo
{
private:
    int principal, year;
    float interestrate, returnvalue;
public:
    bankdepo(){}
    bankdepo(int p, int y, float r);
    void show();
};

bankdepo::bankdepo(int p, int y, float r)
{
    principal = p;
    year = y;
    interestrate = r / 100.0; // Convert interest rate to decimal
    returnvalue = principal * pow((1 + interestrate), y); // Calculate return value using compound interest formula
}

void bankdepo::show(){
    cout << endl << "Principal amount was " << principal << ". Return value after " << year << " years is " << returnvalue << endl;
}

int main(){

    bankdepo bd1,bd2,bd3;

    int p, y;
    float r;

    cout << "Enter the value of principal amount, years, and interest rate: " << endl;
    cin >> p >> y >> r;
    bd1 = bankdepo(p, y, r);
    bd1.show();

    return 0;
}
