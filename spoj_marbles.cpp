#include<iostream>
using namespace std;
long long fact(int a,int b){
  int n = a-1;
  int r = b-1,i=0;
  long long result=1;
  if (r > n/2) {
    r = n - r;
  }
  for (i = 0; i < r; i++) {
    result *= (n-i);
    result /= (i+1);
  }
  return result;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<fact(a,b)<<endl;
    }
}
