#include <iostream>
using namespace std;

#define MAX 5

class Stack
{
    int arr[MAX];
    int top;

public:
    
    Stack()
    {
        top = -1;
    }

    
    void push()
    {
        int x;

        if (top == MAX - 1)
        {
            cout << "Stack Overflow! Stack is Full.\n";
        }
        else
        {
            cout << "Enter element to push: ";
            cin >> x;

            top++;
            arr[top] = x;

            cout << x << " inserted into stack.\n";
        }
    }

    
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow! Stack is Empty.\n";
        }
        else
        {
            cout << "Deleted element: " << arr[top] << endl;
            top--;
        }
    }

    
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is Empty.\n";
        }
        else
        {
            cout << "Stack elements are:\n";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << endl;
            }
        }
    }
};

int main()
{
    Stack s;
    int choice;

    do
    {
        cout << "\n===== STACK MENU =====\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s.push();
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.display();
            break;

        case 4:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}

