#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {   int n,x;
        cin>> n>>x;
        vector<int> arr(n);
        for(auto &a : arr) cin>>a;
        int mini= arr[0];
        for(int i=0;i< n-1;i++)
        {
            mini= max(mini, arr[i+1]-arr[i]);
        }
        mini= max(mini,2*(x- arr[n-1]));
        cout<<mini<<endl;

    }
    return 0;
} 