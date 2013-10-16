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
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        stack x;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='(') continue;
            else if(a[i]>96)
            {
                cout<<a[i];
            }
            else if(a[i]==')')
            {
                x.display();
            }
            else
            {
                x.push(a[i]);
            }
        }
        cout<<endl;
    }
}
