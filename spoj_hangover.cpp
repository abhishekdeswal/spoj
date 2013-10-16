#include<iostream>
using namespace std;
int main()
{
    while(true)
    {   float t;
        cin>>t;
        if(int(100*t)==0) break;
        float i=2;
        float sum=0.0;
        while(100*sum<100*t)
        {
            sum += 1/i++;
        }
        cout<<i-2<<" card(s)"<<endl;
}}

