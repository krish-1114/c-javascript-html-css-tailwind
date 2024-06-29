#include <iostream>
using namespace std;

class shop
{
private:
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);

    // shop(/* args */);
};

void shop::setprice(void)
{
    cout << "Enter Id of Your Item" << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter Price of Your Item" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{

    shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();

    return 0;
}