#include <iostream>
using namespace std;
char stack[100];
int n = 100, top = -1;
void push(char val)
{
    if (top >= n - 1)
        cout << "Stack Overflow" << endl;
    else
    {
        top++;
        stack[top] = val;
    }
}
void pop()
{
    if (top <= -1)
        cout << "Stack Underflow" << endl;
    else
    {
        cout << "The popped element is " << stack[top] << endl;
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        cout << "Stack elements are:";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
    else
        cout << "Stack is empty";
}
int main()
{

    push('a');
    push('b');
    push('c');
    push('d');
    cout << endl;
    display();
    cout << endl;
    pop();
    cout << endl;
    cout << "removing 1st element" << endl;
    display();
    pop();
    cout << endl;
    cout << "removing 2nd element" << endl;
    display();
    pop();
    cout << endl;
    cout << "removing 3rd element" << endl;
    display();

    pop();
    cout << endl;
    cout << "removed all elements" << endl;
    display();
    return 0;
}