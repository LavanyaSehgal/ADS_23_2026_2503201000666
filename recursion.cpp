#include<iostream>
using namespace std;

void printNumbers(int n) {
    if (n==0) {
        return;
    }
    cout << n << " ";
    printNumbers(n-1);  // Just call it, don't try to print its return value
}

int main(){
    int n;
    cin>>n;
    printNumbers(n);  // Same here - just call it
    return 0;
}