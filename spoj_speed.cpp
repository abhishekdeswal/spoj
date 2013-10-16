#include <iostream>
using namespace std;
float mod(float a)
{
    if(a>0) return a;
    else return -1*a;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a<b) swap(a,b);
        int sp=a-b;
        int cnt=0;
        long c=a*b;
        a=mod(a);
        b=mod(b);
        while(a!=b)
        {
        if(a>b)
        a=a-b;
        else
        b=b-a;
        }
        while(cnt*a<sp)
            cnt++;
        cout<<cnt<<endl;

}
    }
