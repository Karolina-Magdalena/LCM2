#include <iostream>

using namespace std;

int x,n;
unsigned long long iloczyn,a,b,c,d,e,wynik;

unsigned long long nww (unsigned long long a, unsigned long long b)
{
    c=a;
    d=b;
    while (b!=0)
    {
        e=a%b;
        a=b;
        b=e;
    }
    return (c/a)*d;
}

int main()
{
    cin>>x;
    for (int i=1; i<=x; i++)
    {
        cin>>n>>a;
        for (int j=2;j<=n;j++)
        {
            cin>>b;
            a=nww(a,b);
        }
    cout<<a<<endl;
    }
        return 0;
}
