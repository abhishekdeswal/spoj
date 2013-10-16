#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n;
        cin>>n;
        long long a,sum=0;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            sum = (sum+a)%n;
        }
        if(sum%n==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
