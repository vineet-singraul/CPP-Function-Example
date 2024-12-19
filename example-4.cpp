#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Integer Addition: " << add(10, 20) << endl;
    cout << "Double Addition: " << add(5.5, 3.3) << endl;
    return 0;
}
