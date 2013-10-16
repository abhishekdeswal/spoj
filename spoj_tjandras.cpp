#include <iostream>
using namespace std;
long long fact(int a, int b)
{
    if(a<b) return 0;
    if(b>a/2) b=a-b;
    long long fct=1;
    for(int i=0;i<b;i++)
        {
            fct*=(a-i);
            fct/=(i+1);
        }
        return fct;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i=0,cnt2=0;
        if(n<4) cout<<0<<endl;
        else
        {
            long long sum=0,sum1=0;
            sum1=fact((n-4)/3+2,2);
            for(i=1;2*i*(i+1)<=n;i++)
            {
                continue;
            }
            n-=2*i*(i-1);
            sum+=(fact(i,2)*fact(i,2));
        q:
            if(n>=3)
            {
                cnt2=1;
                n-=3;
                cnt2++;
                while(n>=2 && cnt2<i)
                {
                    n-=2;
                    cnt2++;
                }
                sum+=(fact(i+1,2)-fact(i,2))*fact(cnt2,2);
                if(n>3) goto q;
            }
                cout<<max(sum,sum1)<<endl;
        }
    }
}
