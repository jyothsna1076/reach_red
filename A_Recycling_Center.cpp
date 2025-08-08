#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,c;
        cin>>n>>c;
        vector<int> arr(n);
        for(auto &a:arr) cin>>a;
        sort(arr.begin(), arr.end());
        auto it= upper_bound(arr.begin(), arr.end(), c);
        int k= it- arr.begin();
        //cout<<k<<"\n";
        int ans= n-k;
        int temp=0;
        for(int i=k-1;i>=0;i--)
        {
            if(1LL* (1<<temp)*arr[i]<=c) temp++;
            else ans++;
           // cout<<i<<" "<<ans<<" "<<temp<<"\n";
        }
        cout<<ans<<"\n";
    }
    return 0;
}