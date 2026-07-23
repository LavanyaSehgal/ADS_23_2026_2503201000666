#include <iostream>
using namespace std;

const int MAX = 10;
int stack[MAX];
int top = -1;

bool isempty()
{
    return (top == -1);
}

bool isfull()
{
    return (top == MAX - 1);
}

void push(int x)
{
    if (isfull())
    {
        cout << "Stack Overflow\n";
    }
    else
    {
        top++;
        stack[top] = x;
        cout << x << " pushed into the stack\n";
    }
}

void pop()
{
    if (isempty())
    {
        cout << "Stack Underflow\n";
    }
    else
    {
        cout << stack[top] << " popped from the stack\n";
        top--;
    }
}

void display()
{
    if (isempty())
    {
        cout << "Stack is empty\n";
    }
    else
    {
        cout << "Stack elements are:\n";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();

    return 0;
}