// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello";





// }
#include <iostream>
#include <algorithm> // for sort()
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    sort(str.begin(), str.end());

    cout << "Sorted string: " << str;

    return 0;
}
