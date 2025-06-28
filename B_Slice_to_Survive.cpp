#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        int a,b;
        cin>>a>>b;
        a= min(a,n-a+1);
        b= min(b, m-b+1);
       // cout<<ceil(log2(n))<<" "<<ceil(log2(m))<<" "<<ceil(log2(m-b))<<" "<<ceil(log2(n-a))<<endl;
        int ans= min((ceil(log2(n))+ceil(log2(b))),(ceil(log2(a))+ceil( log2(m))));
        cout<<ans+1<<endl;
    }
    return 0;
}