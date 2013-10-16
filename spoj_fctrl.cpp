#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int counter = 0,t;
    float x;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
        cin>>a[i];
    for(int i=0;i<t;i++)
    {
        counter=0;
        float j=1;
        while(1)
        {
            x=pow(5,j++);
            if(x<=a[i])
            {
                counter += a[i]/x;
                continue;
            }
            else
            {
                cout<<counter<<endl;
                break;
            }

        }
    }
    return 0;
}

