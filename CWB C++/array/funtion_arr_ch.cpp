#include<iostream>
using namespace std;

void print(void* arr, int size, int elementSize) {
    for (int i = 0; i < size; i++) {
        if (elementSize == sizeof(int)) {
            cout << *((int*)arr + i);
        } else if (elementSize == sizeof(char)) {
            cout << *((char*)arr + i);
        }
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    print(arr, 5, sizeof(int));
    cout << endl;

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    print(ch, 5, sizeof(char));

    return 0;
}
