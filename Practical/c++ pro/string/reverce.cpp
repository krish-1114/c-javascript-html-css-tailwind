#include<iostream>
#include<algorithm> // Include the algorithm header for reverse function
using namespace std;

int main() {
    string s = "Krish";
    cout << s << endl;

    reverse(s.begin(), s.end()); // Reversing the string

    cout << s << endl;

    return 0;
}
