// #include<iostream>
// using namespace std;
// int main(){
// char a;
// cin>>a;

// if (a>=65 && a<=90)
// {
//     cout<<"upper case";
// }
// else if (a>=97 && a<=122)
// {
//     cout<<"lower case";
// }
// else{
//     cout<<"not a number";
// }

// return 0;
// }

#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char ch;
    cin>>ch;

    if (islower(ch)) {
        cout << ch << " is a lowercase letter." << endl;
    } else if (isupper(ch)) {
        cout << ch << " is an uppercase letter." << endl;
    } else {
        cout << ch << " is not a letter." << endl;
    }

    return 0;
}
