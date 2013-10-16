#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c[2*n+1];
    int d[4]={0};
    char a[5]={'A','B','C','D'};
    for(int i=0;i<2*n;i++)
        {
            cin>>c[i];
            if(c[i]=='A') d[0]++;
            else if(c[i]=='B') d[1]++;
            else if(c[i]=='C') d[2]++;
            else d[3]++;
        }
    int k=0;
    char tmp=a[k];
    for(int i=0;i<2*n;i++)
    {
        q:
        if(c[i]!=a[k] && d[k]<n) {cout<<a[k]; d[k]++; k++;}
        else {k++; if(k>3) k=0;   goto q;}
    }
}
