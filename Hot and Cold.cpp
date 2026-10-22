#include <iostream>
using namespace std;
int main() {
    int temp;
    cout << "Enter temperature: ";
    cin >> temp;
    if (temp > 30) {
        cout << "Result: Hot";
    } else {
        cout << "Result: Cold";
    }
    return 0;
}
