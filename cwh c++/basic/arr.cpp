#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5};

int arr1[4];
arr1[0]=12;
arr1[1]=13;
arr1[2]=14;
arr1[3]=15;
cout<<arr1[0]<<endl;
cout<<arr1[1]<<endl;
cout<<arr1[2]<<endl;
cout<<arr1[3]<<endl;

// cout<<arr[0]<<endl;
// cout<<arr[1]<<endl;
// cout<<arr[2]<<endl;
// cout<<arr[3]<<endl;
// cout<<arr[4]<<endl;

int mark[]={1,2,3,4};

// for (int i = 0; i < 4; i++)
// {
//     cout<<"The value of marks "<<i<<"is "<<mark[i]<<endl;
// }

int i = 0;
// while (i<4)
// {
//     cout<<"The value of marks "<<i<<" is "<<mark[i]<<endl;
//     i++;   
// }

do
{ 
    cout<<"The value of marks "<<i<<" is "<<mark[i]<<endl;
    i++;   
} while (i<4);

return 0;
}