#include<iostream>
using namespace std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1);
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    functionA(n);
    return 0;
}