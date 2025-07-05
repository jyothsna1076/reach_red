#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
     int n,k;
     cin>>n>>k;
    // vector<int> arr(n);
    int a;
     priority_queue<pair<int,int>> pq;
     for(int i=0;i<n;i++)
     {
        cin>>a;
        if(a%k !=0) pq.push({a%k,n-i});
        else pq.push({k,n-i});

     }
     while(!pq.empty())
     {
        auto topp= pq.top();
        pq.pop();
        
            cout<<n-topp.second+1<<" ";
    
      
     }
cout<<endl;
       
    }
    return 0;
}