// list of integers,char,float os called array
#include<iostream>
using namespace std;
void change(int y[]){
        y[0] = 100;

}
int main(){
    int x[5];
    cout<<endl;
    // This for loop is for taking input
    for (int i = 0; i <= 4; i++)
    {
        cin>>x[i];
    }
    cout<<"----------------------";

    cout<<endl;
    // This for loop is for Getting Output

     for (int i = 0; i <= 4; i++)
    {
        cout<<x[i]<<" ";
    }

    change(x);   // funtion

    cout<<endl;
    cout<<"----------------------";

    cout<<endl;

    // This for loop is for Getting Output after updation
     for (int i = 0; i <= 4; i++)
    {
        cout<<x[i]<<" ";
    }

return 0;
}

// 9 : 35