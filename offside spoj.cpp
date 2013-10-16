#include <iostream>
using namespace std;
int main()
{
    while(1)
    {
        int a,d,x;
        cin>>a>>d;
        if(a==0 && d==0) break;
        int mina=10001,m1=10001,m2=10001;
        while(a--)
        {
            cin>>x;
            mina=min(mina,x);
        }
        if(d>0)
        {
            cin>>x;
            m1=min(m1,x);
            d--;
        }
        while(d--)
        {
            cin>>x;
            if(x<m1)
            {
                m2=m1;
                m1=x;
            }
            else
                m2=min(m2,x);
        }
        if(mina<m2) cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
}
