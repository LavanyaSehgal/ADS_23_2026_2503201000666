#include <iostream>
#include <stack>
using namespace std;

stack<char> s;

int prec(char ch) {
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    return 0;
}

void infixToPostfix(string str, int i) {
    if (i == str.length()) {
        while (!s.empty()) {
            cout << s.top();
            s.pop();
        }
        return;
    }

    char ch = str[i];

    if (isalnum(ch))
        cout << ch;

    else if (ch == '(')
        s.push(ch);

    else if (ch == ')') {
        while (s.top() != '(') {
            cout << s.top();
            s.pop();
        }
        s.pop();
    }

    else {
        while (!s.empty() && prec(s.top()) >= prec(ch)) {
            cout << s.top();
            s.pop();
        }
        s.push(ch);
    }

    infixToPostfix(str, i + 1);
}

int main() {
    string infix;
    cout << "Enter Infix: ";
    cin >> infix;

    cout << "Postfix: ";
    infixToPostfix(infix, 0);

    return 0;
}