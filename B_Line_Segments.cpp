#include<bits/stdc++.h>
using namespace std;
#include<cmath>
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int px,py,qx,qy;
        cin>>px>>py>>qx>>qy;
        vector<int> arr(n);
        for(auto &a:arr) cin>>a;
        long long sum=0;
        long long buff=0;
        double distance = hypot(px - qx, py - qy);
        if(n==1)
        buff= arr[0];
        for(int i=0;i<n-1;i++)
        {
            sum+= abs(arr[i+1]-arr[i]);
            buff+= arr[i+1]+arr[i]- abs(arr[i+1]-arr[i]);

        }
       // cout<<distance<<" ";
        if(distance<= sum+buff  && distance>=sum)
        cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

}
    return 0;
}