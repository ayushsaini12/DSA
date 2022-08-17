#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};
struct node* top = NULL;

void push (int val)
{
    struct node* newnode = (struct node* )malloc(sizeof(struct node));
    newnode -> data = val;
    newnode-> link = top;
    top = newnode;
    cout<<val <<" is been pushed"<<endl;
    
}

void pop()
{
    if (top== NULL)
    {
        cout<<"underflow";
    }
    else{
        node* temp;
        temp = top;
        cout<< temp-> data<< " is been removed"<<endl;
        top = top ->link;
        free(temp);
    }
}
void display()
{
    node* temp;
    if (top== NULL)
    {
        cout<<" empty";
    }
    else
    {
        temp = top;
        cout<<endl;
        cout<<"elements"<<endl;
        while (temp != NULL)
        {
            cout<<temp->data<<" ";
            temp =temp->link;
        }
        
    }
    
}
int main(){
    push(1);
    push(2);
    push(4);
    push(5);
    pop();
    display();
}
