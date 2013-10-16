#include <iostream>
using namespace std;

unsigned long long fact(int a,int b){
  int n = a;
  int r = b,i=0;
  if(r>n) return 0;
  unsigned long long result=1;
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
    int g;
    cin>>g;
    while(g--)
    {
        int b,g,t;
        cin>>b>>g>>t;
        cout<<fact(b+g,t)-(fact(g,t))-(b*fact(g,t-1))-(fact(b,2)*fact(g,t-2))-fact(b,t)-(fact(b,3)*fact(g,t-3))<<endl;
    }
}
