#include <iostream>
using namespace std;
int main() {
    float bill;
    cout << "Enter bill amount: ";
    cin >> bill;
    if (bill >= 1000) {
        bill = bill - (bill * 0.10); // 10% discount
    }
    cout << "Amount to pay: " << bill;
    return 0;
}
