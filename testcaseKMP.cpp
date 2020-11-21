#include<bits/stdc++.h>
using namespace std;
#define int long long int
int a=1,b=1e2,c=1e3,d=1e4,e=1e5,f=1e6,g=1e8,MAX=26;
signed main()
{
    srand(time(0));
    string name="Jecyll";
    int k1 = (rand() % (b - a + 1)) + a;
    int k2 = (rand() % (c - b + 1)) + b;
    int k3 = (rand() % (d - c + 1)) + c;
    int k4 = (rand() % (e - d + 1)) + d;
    int k5 = (rand() % (f - e + 1)) + e;
    int k6 = (rand() % (g - f + 1)) + f;
    // cout<<k1<<' ';
    // cout << k1 << ' ';
    // cout << k2 << ' ';
    // cout << k3 << ' ';
    // cout << k4 << ' ' ;
    // cout << k5 << ' ';
    // cout<<k6<<endl;
    fprintf(stderr, "%lld\n%lld\n%lld\n%lld\n%lld\n%lld\n",k1,k2,k3,k4,k5,k6);
    char alphabet[MAX] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z'};
    for(int i=0;i<g;i++)
    {
        if(i==k1 || i==k2 || i==k3 || i==k4 || i==k5 || i==k6)
        {
            cout<<name;
        }
        else
        {
            cout << alphabet[rand() % MAX];
        }   
    }
    cout<<endl;
}