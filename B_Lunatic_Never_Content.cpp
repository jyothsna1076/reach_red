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
        int till= n/2;
        int ans= 0;
        bool updated= false;
        bool factor = false;
        int maxi= -1;
        for(int i=0;i<till;i++)
        {
            if(arr[i]==arr[n-i-1]) continue;
            if(! (ans==0) && (abs(arr[n-i-1]-arr[i])==ans || arr[n-i-1]%ans == arr[i]%ans))continue;
            else 
            { 
                if(!updated )
                {   int num1= max(arr[n-i-1],arr[i]);
                    int num2= min(arr[n-i-1], arr[i]);
                   if(num1% num2 ==0) 
                   {
                    maxi= num2;
                    factor= true;
                   }
                  ans= abs(arr[n-i-1] - arr[i]);
                    updated = true;
                }
                else 
                {  if(factor) 
                    ans=1;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}