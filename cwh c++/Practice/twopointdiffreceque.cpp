#include <iostream>
#include <cmath> // Include the math.h header for sqrt function
using namespace std;

class point {
private:
    int x, y;

public:
    point(int a, int b) {
        x = a;
        y = b;
    }

    friend double distance(point x, point y);

    void display() {
        cout << "The point (" << x << ", " << y << ")\n";
    }
};

double distance(point p1, point p2) {
    int x_diff = p2.x - p1.x;
    int y_diff = p2.y - p1.y;

    return sqrt(x_diff * x_diff + y_diff * y_diff);
}

int main() {
    point p(1,1);
    p.display();

    point q(1,1);
    q.display();

    // Calculate and display the distance between points p and q
    cout << "Distance between points p and q: " << distance(p, q) << endl;

    return 0;
}
