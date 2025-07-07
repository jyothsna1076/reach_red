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
        if(n!=0)
        {
        vector<int> arr(n);
        for(auto &a:arr) cin>>a;
        auto mindex= min_element(arr.begin(),arr.end())-arr.begin();
        if(mindex==0 &&arr.size()>=2) cout<<2*arr[0]<<endl;
        else if(arr.size()==1) cout<<arr[0]<<endl;
        else  if(arr[0]<=arr[1])cout<<2*arr[0]<<endl;
        else cout<<arr[0]+arr[1]<<endl;
        }
        
    }
    return 0;
}