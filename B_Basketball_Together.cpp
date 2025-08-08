#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int j=0;
    while(j<tc)
    {
       int n, enemyPower;
       cin>>n>>enemyPower;
       vector<int> arr(n);
       for(auto &a: arr)cin>>a;
       sort(arr.begin(), arr.end());
       int stopindex=0;
       for(int i=0;i<n;i++)
       {
        if(arr[i]> enemyPower)
        {
            stopindex= i;
            break;
        }

       }
       

       j++;
    }
    return 0;
}