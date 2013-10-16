#include <iostream>
using namespace std;
int main()
{
    int t;
    while(1)
    {
        cin>>t;
        if(t==0) break;
        string a;
        cin>>a;
        for(int j=0;j<t;j++)
            for(int i=0;i<(a.length()/t);i++)
            {
                if(i%2)
                    cout<<a[t*(i+1)-j-1];
                else
                    cout<<a[t*i+j];
            }
        cout<<endl;
    }
}
