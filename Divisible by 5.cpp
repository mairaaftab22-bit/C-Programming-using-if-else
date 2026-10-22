#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 5 == 0) {
        cout << "Result: Divisible by 5";
    } else {
        cout << "Result: Not divisible by 5";
    }
    return 0;
}
