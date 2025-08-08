#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n, enemyPower;
       cin>>n>>enemyPower;
       vector<int> arr(n);
       for(auto &a: arr)cin>>a;
       sort(arr.begin(), arr.end());
       int l=-1;
       int r= n-1;
       int maxteams= 0;
       while(l<r)
       {
        int teamsize= ceil(double(enemyPower+1)/arr[r]);
        //cout<<teamsize<<" ";
        if(l+teamsize-1 <r)
        {
            l= l+teamsize-1;
            maxteams++;
        }
        else break;
        r--;
       }
       cout<<maxteams<<endl;

     
    return 0;
}