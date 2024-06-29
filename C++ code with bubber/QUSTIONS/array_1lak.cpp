#include <iostream>
#include <algorithm>  // Include the algorithm library
using namespace std;
int main() {
    // Declare and initialize an array of 100,000 integers with a value of 3
    int myArray[1000];

    // Use std::fill to set the entire array to the value 3
    std::fill(myArray, myArray + 1000, 3);

    // Now you can use the array as needed

    for (int i = 0; i <= 1000 ; i++)
    {
        cout<<myArray[i];   
    }
    
    return 0;
}