#include<iostream>
using namespace std;
int main(){

    char my_nam[]="krish";
    char my_sur[]={'S','u','t','h','a','r',0};

    printf("%s",my_sur);

    cout<<"---------------------"<<endl;

    for (int i = 0; my_nam[i] != 0; i++)
    {
        cout<<"char is : "<<my_nam[i]<<endl;
    }
    
    cout<<"---------------------"<<endl;

    for(char i : my_nam)
    {
        if (i == 0)
        {
            break;
        }
        
        cout<<"char is :"<<i<<endl;
    }
// 2:58
return 0;
}