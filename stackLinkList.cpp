#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *link;

    Node(int value)
    {
        data = value;
        link = NULL;
    }
};

class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    bool isempty()
    {
        return (top == NULL);
    }

    bool isfull()
    {
        Node *temp = new(nothrow) Node(0);

        if (temp == NULL)
            return true;

        delete temp;
        return false;
    }

    void push(int x)
    {
        if (isfull())
        {
            cout << "Stack Overflow\n";
        }
        else
        {
            Node *newNode = new Node(x);
            newNode->link = top;
            top = newNode;
            cout << x << " pushed into stack\n";
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
            Node *temp = top;
            cout << top->data << " popped from stack\n";
            top = top->link;
            delete temp;
        }
    }

    void peek()
    {
        if (isempty())
        {
            cout << "Stack is empty\n";
        }
        else
        {
            cout << "Top element is: " << top->data << endl;
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
            Node *temp = top;
            cout << "Stack elements are: ";
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->link;
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();

    s.display();

    return 0;
}
