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
        long long sum=0;
        for(auto &a:arr)
        { cin>>a;
            sum+=a;
        }
        int maxi= *max_element(arr.begin(),arr.end());
        long long buff= sum-maxi;
        double distance = hypot(px - qx, py - qy);
        if(distance>=  maxi-buff && distance<= sum)
        cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    //     long long sum=0;
    //     long long buff=0;
    //     unordered_map<int,int> freq;
    //     double distance = hypot(px - qx, py - qy);
    //     if(n==1)
    //     sum= arr[0];
    //     for(int i=0;i<n-1;i++)
    //     {
    //         sum+= abs(arr[i+1]-arr[i]);
    //         freq[sum]++;
    //         buff+= arr[i+1]+arr[i]- abs(arr[i+1]-arr[i]);

    //     }
    //    // cout<<distance<<" ";
    //     if(distance<= sum+buff  && distance>=sum)
    //     cout<<"Yes"<<endl;
    //     else if(distance <sum)
    //     {
    //         int extra= sum- distance;
    //         if(extra% 2== 1) cout<<"No"<<endl;
    //         else{
    //             extra= extra/2;
    //             if(freq[extra]>=2) cout<<"Yes"<<endl;
    //             else{

    //             }
    //         }
    //     }

}
    return 0;
}