#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;
struct node *createNode()
{
    int num;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
        cout << "\nMomory is not allocated.";
    else
    {
        cout << "\nEnter number : ";
        cin >> num;
        temp->data = num;
        temp->link = NULL;
    }
    return temp;
}
void Ins_ending()
{
    struct node *temp = head;
    struct node *new_node = createNode();
    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = new_node;
    }
}

void Ins_Beginning()
{
    struct node *new_node = createNode();
    if (head == NULL)
        head = new_node;
    else
    {
        new_node->link = head;
        head = new_node;
    }
}
void del_beg()
{
    struct node *temp = head;
    head = head->link;
    free(temp);
    cout << "Operation done";
    cout << endl;
}

void del_end()
{
    struct node *temp = head;
    while (temp->link->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = NULL;
    cout << endl;
    cout << "Operation done";
    cout << endl;
}
void display()
{
    struct node *temp = head;
    if (temp == NULL)
    {
        cout << "\nLinked list is empty.";
        return;
    }
    while (temp->link != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << temp->data;
}

int main()
{
    int option;
    cout << "Insertion : \n1. Beginning    2. Ending    " << endl;
    cout << endl;
    cout << "Deletion : \n3. Beginning    4. Ending    " << endl;
    cout << endl;
    cout << "5. Display    6. Exit" << endl;
    while (1)
    {
        cout << "\nEnter your option : ";
        cin >> option;
        switch (option)
        {
        case 1:
            Ins_Beginning();
            break;
        case 2:
            Ins_ending();
            break;
        case 3:
            del_beg();
            break;
        case 4:
            del_end();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(1);
        default:
            cout << "Enter valid option.";
            break;
        }
    }
    return 0;
}