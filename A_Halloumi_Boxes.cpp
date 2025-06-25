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
        vector<int> arr(n);
        for(auto &a:arr ) cin>>a;
        int start= -1;
        int end= -1;
        bool decreasing= false;
        for(int i=0;i<n-1;i++)
        {  //cout<<i<<" ";
            // while(i<n-1 && arr[i]> arr[i+1])
            // {
            //     if(start==-1) start = i;
            //     end= i+1;
            //     i++;
            // }
            // if(start != -1 && end- start+ 1 >k ) 
            // {
            //     cout<<"NO"<<endl;
            //     broke= true;
            //     break;
            // }
            // else if(start != -1){
            //     start= -1;
            //     end=-1;
            // }
            if(arr[i]> arr[i+1]) decreasing = true;
        }
        //if(!broke) cout<<"YES"<<endl;
        if(k>=2)cout<<"YES"<<endl;
        else if(!decreasing) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}