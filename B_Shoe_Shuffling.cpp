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
        for(auto &a:arr)cin>>a;
        int count=0;
        int store=0;
        vector<int>b(n);
        int i=0;
        bool flag= true;
        for(i=0;i<n;i++)
        {
            if(count==0)
            {
                store=i;
                count++;
            }
            else{
                if(arr[i-1]==arr[i])
                {
                    b[i]=i;
                    count++;
                }
                else{
                   if(count>=2)
                   { b[store]=i;
                    store=i;
                    count=1;
                   }
                   else
                   {
                        flag= false;
                        break;
                   }
                }
            }
           // cout<<count<<" ";
        }
        b[store]=i;
        //cout<<store<<" "<<i<<" "<<flag<<endl;
        if(flag && count>=2) 
        {
            for(auto a:b) cout<<a<<" ";
            cout<<endl;

        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}