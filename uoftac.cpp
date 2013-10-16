#include <iostream>
using namespace std;
int main()
{
    int h,w,n,t,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>h>>w>>n;
        char a[h+2][w+1],x;
        for(int i=0;i<w;i++)
            a[0][i]='0';
        for(int i=1;i<h+1;i++)
            for(int j=0;j<w;j++)
                    cin>>a[i][j];
        int i=0,j=0;
        for(int q=0;q<n;q++)
        {
            cin>>x;
            if(x=='L') {if(j==0) continue;j--;}
            else if(x=='R') {if(j==w-1) continue;j++;}
            else {if(i==h) continue;i++;}
            if(a[i][j]=='T') {
                cnt++;
                a[i][j]='E';
            }
            else if(a[i][j]=='S')
            {
                if(x=='L') j++;
                else if(x=='R') j--;
                else i--;
            }
            z:
            if(a[i+1][j]=='E') {
                i++;
                goto z;
            }
        }
        cout<<cnt<<endl;
    }
}
