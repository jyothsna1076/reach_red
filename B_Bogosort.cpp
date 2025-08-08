#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        
        vector<int> arr(n);
        for(auto &a: arr)cin>>a;
        sort(arr.begin(), arr.end(), greater<int>());
        for(auto a:arr) cout<<a<<" ";
        cout<<endl;

    }
    return 0;
}