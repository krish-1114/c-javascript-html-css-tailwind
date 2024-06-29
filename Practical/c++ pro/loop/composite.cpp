#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number to check if it's composite: ";
    cin >> number;


    for (int i = 2; i < number; ++i) {
        if (number % i == 0) {
            cout << number << " is a composite number." << endl;
            return 0;
        }
    }

    cout << number << " is not a composite number." << endl;
    return 0;
}

    // if (number <= 1) {
    //     cout << number << " is not a composite number." << endl;
    //     return 0;
    // }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter N  :- ";
//     cin>>n;
//     for (int i = 2; i <= n/2; i++){
//         if (n%i == 0)
//         {
//             cout<<"composite ";
//             break;  
//         }       
//     }    
    
// return 0;
// } 