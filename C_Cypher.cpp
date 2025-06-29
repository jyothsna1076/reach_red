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
       for(auto &a: arr) cin>>a;
       for(int j=0;j<n;j++)
       {
       int k;
       cin>>k;
       string s;
       cin>>s;
       int m=0;
       for(int  i=0;i<k;i++)
       {
        if(s[i]=='U') m--;
        else if(s[i]=='D') m++;
       }
       arr[j]= (arr[j]+m+10)%10;
    }
   // cout<<arr[n-1]<<endl;
   // cout<<arr[n-1]%10<<endl;
    for(auto a:arr)cout<<a<<" ";
    cout<<endl;
    }
    return 0;
}