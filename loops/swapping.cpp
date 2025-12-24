#include <iostream>
using namespace std;
void swapNum(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "\nBefore swapping:";
    cout << "\nA = " << a << "\nB = " << b;
    swapNum(a, b);
    cout << "\n\nAfter swapping:";
    cout << "\nA = " << a << "\nB = " << b;
    return 0;
}
