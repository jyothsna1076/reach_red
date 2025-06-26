#include<bits/stdc++.h>
using namespace std;
//TC---o(1) , SC----O(1)
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        long long x;
        cin>>n>>k>>x;
        long long sub= 1LL*(n-k)*(n-k+1)/2;
        long long summax= (1LL*n*(n+1)/2)-sub;
        long long summin= 1LL*k*(k+1)/2;

        if(x>= summin && x<=summax) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}