#include<iostream>
using namespace std;

class shop{
    int id;
    float prise;
    public:
        void setdata(int a, float b){
            id = a;
            prise = b;
        }

        void getdata(){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<prise<<endl;
        }

};

int main(){
    int size = 200;
    // int *ptr = &size;
    // int *ptr = new int[34];

    shop *ptr = new shop[size];
    shop *ptrtemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<" enter Id and prise of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata( p,q);
        ptr++;
    }
    
    for (int j = 0; j < size; j++)
    {
        cout<<"Item number : "<<j+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    


return 0;
}