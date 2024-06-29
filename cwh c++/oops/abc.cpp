#include <iostream>
using namespace std;

int main() {
    int returnedDay, returnedMonth, returnedYear;
    int dueDay, dueMonth, dueYear;

    // Input for actual return date
    cin >> returnedDay >> returnedMonth >> returnedYear;

    // Input for expected return date (due date)
    cin >> dueDay >> dueMonth >> dueYear;

    int fine = 0;

    if (returnedYear > dueYear) {
        // Book returned after the expected year
        fine = 10000;
    } else if (returnedYear == dueYear) {
        // Book returned in the same year as expected
        if (returnedMonth > dueMonth) {
            // Book returned after the expected month
            fine = 500 * (returnedMonth - dueMonth);
        } else if (returnedMonth == dueMonth && returnedDay > dueDay) {
            // Book returned after the expected day but within the same month
            fine = 15 * (returnedDay - dueDay);
        }
    }

    cout << fine << endl;

    return 0;
}
