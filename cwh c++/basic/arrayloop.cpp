#include<iostream>
using namespace std;
int main(){

    int my_num[] = {4,5,6,7,9,8};
    int i = 0;

    // while (i < 7)
    // {
    //     if (i == 3)
    //     {
    //         cout<<"special"<<endl;
    //         break;
    //     }
        
    //     cout << " number is : "<<my_num[i] << endl;
    //     i = i + 1;
    // }


        do  
        {
        if (i == 3)
        {
            cout<<"special"<<endl;
            break;
        }
        cout << " number is : "<<my_num[i] << endl;
        i = i + 1;
    } while (i < 7);

return 0;
}