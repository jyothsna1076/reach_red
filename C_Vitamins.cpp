#include<bits/stdc++.h>
using namespace std;
const int mod =1e9+7;

int main()
{
//     #include <typeinfo>
// cout << typeid(pow(2, 5)).name() << endl;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> table(10,10000000);

for(int i=0;i<n;i++)
{
    int c;
    string s;
    cin>>c;
    cin>>s;
    int m= s.size();
    int mini=0;
    for(int k=0;k<m;k++)
    {
        mini+=(s[k]-'A'+2);
        //cout<<mini<<" ";
        
    }
     table[mini]= min(c,table[mini]);
    
    
}
int ans= table[2]+table[3]+table[4];
//cout<<ans<<" ";
    ans= min(ans, table[9]);
    ans= min(ans,min(table[5]+min(table[4],table[6]),table[5]+table[7]));
    ans= min(ans,min(table[7]+table[6],table[7]+table[2]));
    ans= min(ans,table[6]+table[3]);
    //cout<<ans<<" ";
    // int l=2; int r=2;
    // while(r<9)
    // {
    //     if(l+r>=9)
    //     {   while(l+r >=9 && l<r)
    //         {
    //         ans= min(ans, table[l]+table[r]);
    //        // cout<<ans<<" ";
    //         l++;
    //         }
    //     }
    //     r++;
    // }
if(ans/10000000) cout<<"-1"<<"\n";
else cout<<ans<<"\n";

    
    return 0;
}