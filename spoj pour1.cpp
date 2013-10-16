#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,count=0,x=0,y=0;
        cin>>a>>b>>c;
        if(c>a && c>b)
			count=-1;
		else if(a==c || b==c)
			count=1;
		else if(c==0)
			count=0;
		else 
		{
			if(a<b)
			{
				int temp=a;
				a=b;
				b=temp;
			}
			while(1)
			{
				x=b;
				count++;
				y=y+x;
				count++;
				if(y==c || a-y==c)
					break;
				if(y>a)
				{
					x=y-a;
					if(x==c) break;
					y=0;
					count++;
					y+=x;
					count++;
					if(a-y==c)
						break;
				}
				else if(y==a && x==b)
				{
					count=-1;
					break;
				}
			}
		}
		cout<<count<<endl;
    }
}
