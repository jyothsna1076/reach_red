#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        int l=-1,r=-1;
       
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]== 1 && l==-1) l=r=i;
            else if(arr[i]==1) r=i;
        }
        if(r-l+1 <=x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}