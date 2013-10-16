#include <iostream>
using namespace std;
int main()
{
    char c;
    while(cin.get(c))
    {
        if(c=='\n'||c==' ') break;
        c-=3;
        if(c<97) c+=26;
        cout<<c;
    }
}
