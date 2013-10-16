#include <iostream>
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
    //result = result%10000007;
  }
  return result;
}
int main()
{
    int n,r;
    cin>>n>>r;
    if(r>n) cout<<-1;
    else if(r==n) cout<<1;
    else
    {
        cout<<fact(n,r)%10000007<<endl;
    }
}
