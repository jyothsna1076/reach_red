#include<bits/stdc++.h>
using namespace std;

int main()
{
//     #include <typeinfo>
// cout << typeid(pow(2, 5)).name() << endl;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int> algo(n);
    vector<int> mish(n);
    for(auto &a: algo) cin>>a;
    for(auto &a:mish) cin>>a;
    int l=0;
    int r=0;
    int temp=0;
    int ans=0;
    int maxi=0;
    while(r<n)
    {
        if(mish[r]==0)
        temp+= algo[r];
        else
        {
            ans+= algo[r];
        }
        if(r-l+1 ==k)
        {
            maxi= max(maxi,temp);
            if(mish[l]==0) temp-= algo[l];
            l++;
        }
        r++;
    }
    cout<<ans+maxi<<endl;
    return 0;
}