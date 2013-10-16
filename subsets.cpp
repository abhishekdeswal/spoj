#include <iostream>
using namespace std;

char a[4]="abc";

int next(int mask[], int n)
{
    int i;
    for(i=0; (i<n) && mask[i]; i++)
        mask[i]=0;
    if(i<n)
    {
        mask[i]=1;
        return 1;
    }
    return 0;
}

void print(int mask[], int n)
{
    int i;
    cout<<"{";
    for(i=0; i<n; i++)
        if(mask[i])
            cout<<a[i];
    cout<<"}\n";
}

int main()
{
    int mask[3], n=3, i;
    for(i=0; i<n; i++)
        mask[i]=0;

    print(mask,n);

    while(next(mask,n))
        print(mask,n);

    return 0;
}
