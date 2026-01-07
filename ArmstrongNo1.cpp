#include <iostream>
using namespace std;

int main() {
    int num, temp, digit;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (num > 0) {
        digit = num % 10;
        sum = sum + digit * digit * digit;
        num = num / 10;
    }

    if (sum == temp)
        cout << "It is an Armstrong number";
    else
        cout << "It is not an Armstrong number";

    return 0;
}
