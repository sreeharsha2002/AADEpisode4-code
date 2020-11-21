#include<bits/stdc++.h>
using namespace std;
#define int long long int
int sumdigits(int n)
{
    
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
    
}
signed main()
{
    string num[6];
    int a[6];
    for(int i=0;i<6;i++)
    {
        getline(cin,num[i]);
        sscanf(num[i].c_str(), "Found Jecyll word at index %lld",&a[i]);
    }
    
    int b[6];
    for(int i=0;i<6;i++)
    {
        b[i]=a[i];
        while(b[i]>=10)
        {
            b[i]=sumdigits(b[i]);
            
        }
    }
    cout<<"The Password is ";
    for(int i=0;i<6;i++)
    {
        cout<<b[i];
    }
    cout<<endl;
}