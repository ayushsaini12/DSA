#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

struct node* rear =NULL;
struct node* front= NULL;


void queue(int val){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode ->data = val;
    newnode->link = NULL;
    if ((front == NULL)&& (rear == NULL))
    {
        front= rear= newnode;
        cout<<newnode->data<<" is been inserted"<<endl;
    }
    else
    {
        rear= newnode;
        cout<<newnode->data<<" is been inserted"<<endl;
    }
    
}
void dequeue()
{
    if (front== NULL)
    {
        cout<<"Empty queue"<<endl;
        exit;
    }
    else
    {
        node* temp;
        temp = front;
        cout<<temp->data<<" is been removed"<<endl;
        front = front ->link;
        free(temp);
    }
    
}
void display()
    {
        while(front!=NULL)
        {
            cout<<front->data<<" ";
            front=front->link;
        }
    };

int main()
{
    queue(1);
    queue(2);
    queue(3);
    dequeue();
    
}