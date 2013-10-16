#include <iostream>
int main()
{
    int a,c=0,b;
    std::cin>>a;
    while(a--)
    {
        std::cin>>b;
        (b>0 ? c+=b : 1 );
    }
    std::cout<<c;
}
