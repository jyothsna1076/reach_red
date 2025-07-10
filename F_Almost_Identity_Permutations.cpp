#include<bits/stdc++.h>
using namespace std;
const int mod =1e9+7;
long long power(long long a, long long b, long long m) {
    long long res = 1;
    while(b) {
        if(b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
long long nci(int n, int k,vector<long long> &dp)
{
       long long num = dp[n];
    long long denom = dp[n-k];
    denom=( denom*dp[k])%mod;
    return (long long)((__int128)num * power(denom, mod - 2, mod)) % mod;  // Fermat's little theorem
}
int main()
{
//     #include <typeinfo>
// cout << typeid(pow(2, 5)).name() << endl;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<long long> dp(n+1);
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        dp[i]= ((dp[i-1]%mod)*(i))%mod;
    }
vector<long long> derangements(k+1);
derangements[0]=1;
derangements[1]=0;
for(int i=2;i<=k;i++)
{
    derangements[i]= (((derangements[i-1]+derangements[i-2])%mod)*(i-1))%mod;
}
long long ans=0;
for(int i=k;i>=0;i--)
{
    long long addd= (long long)((__int128)nci(n,i,dp)*derangements[i]%mod) ;
ans= (ans+addd) %mod ;
//cout<<ans<<" ";
}
cout<<ans<<endl;
    return 0;
}