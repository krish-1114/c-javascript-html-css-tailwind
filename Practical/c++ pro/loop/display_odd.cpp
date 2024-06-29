 #include <iostream>
using namespace std;

int main() {
    int start, end, difference;

    // Input for start point
    cout << "Enter the starting point: ";
    cin >> start;

    // Input for end point
    cout << "Enter the ending point: ";
    cin >> end;

    // Input for difference
    cout << "Enter the difference between each iteration: ";
    cin >> difference;

    // Loop based on inputs
    cout << "Loop output: ";
    for (int i = start; i <= end; i += difference) {
        cout << i << " ";
    }
    cout << endl;


    return 0; 
}