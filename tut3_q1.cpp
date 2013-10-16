#include <iostream>
using namespace std;

struct node
{
    int value;
    node* next;
    node* pre;
};

class Linkedlist
{
    node* head;
public:
    Linkedlist() {head = NULL;}

    void insert(int key)
    {
        node* newnode = new node;
        if(head==NULL)
        {
            head = newnode;
            newnode->value = key;
            newnode->pre = NULL;
            newnode->next = NULL;
        }
        else
        {
            node* temp = head;
            while(temp->value<key && temp->next!=NULL)
                temp= temp->next;
                if(temp->next==NULL)
                {

                    temp->next = newnode;
                    newnode->value=key;
                    newnode->next=NULL;
                    newnode->pre=temp;
                }
                else
                {
                    newnode->pre=temp->pre;
                    temp->pre->next= newnode;
                    temp->pre = newnode;
                    newnode->next = temp;
                }
        }
    }

    void remove(int key)
    {
        node* temp;
        temp = head;
        while(temp->value!= key && temp!=NULL)
            temp=temp->next;

        if(temp==NULL)
        {
            cout<<"Element Not found\n";
        }
        else
        {
            temp->pre->next=temp->next;
            temp->next->pre=temp->pre;
        }
    }

    bool search(int key)
    {
        node* temp = head;
        while( temp)
        {
            if (temp->value==key)
                return true;
            else
                temp=temp->next;
        }
        return false;
    }

    void display(int key)
    {
        node* temp = head;
        while(temp->value!=key && temp!=NULL)
            temp=temp->next;
        node* current = temp;
        while(current!=NULL)
        {
            cout<<current->value<<"  ";
            current=current->pre;
        }
        current =temp;
        cout<<endl;
        while(current)
        {
            cout<<current->value<<"  ";
            current=current->next;
        }
    }
};

int main()
{

}
