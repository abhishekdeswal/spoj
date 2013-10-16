#include<iostream>
using namespace std;
int main()
{
    while(true)
    {
        int a,b;
        cin>>a>>b;
        if(a==-1&&b==-1) break;
        int i=1;
        if(b>a) swap(a,b);
        if(b==0) cout<<a<<endl;
        else
        {
            if(a%(b+1)!=0)
            cout<<(a/(b+1))+1<<endl;
            else cout<<a/(b+1)<<endl;
        }
    }
}

