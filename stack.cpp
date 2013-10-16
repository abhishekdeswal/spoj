#include <iostream>
using namespace std;

struct node
{
    node* next;
    char data;
};
class stack
{
    node* head;
public:
    stack() { head=0; }
    void push(char x)
    {
        node* newnode = new node;
        newnode->data = x;
        newnode->next = head;
        head = newnode;
    }
    void pop()
    {
        head=head->next;
    }
    void display()
    {
        cout<<head->data;
        pop();
    }
};
int main()
{
    stack x;
    x.push('2');
    x.push('6');
    x.push('4');
    x.push('9');
    x.display();
    x.display();
    x.display();
}
