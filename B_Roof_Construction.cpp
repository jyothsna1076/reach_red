#include<bits/stdc++.h>
//#include<numeric>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
       int n;
       cin>>n;
       int k= floor(log2(n-1));
        k= (1<<k);
       for(int i= k-1;i>=0;i--)
       {
        cout<<i<<" ";
       }
       for(int i= k;i<n;i++)
       {
        cout<<i<<" ";
       }
       cout<<endl;
    }
    
    return 0;
}