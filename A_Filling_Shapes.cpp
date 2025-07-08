#include<bits/stdc++.h>
using namespace std;
vector<int> lookup(61);
int helper(int n)
{   if(n==2) return lookup[2];
    if(lookup[n]!=0) return lookup[n];
    lookup[n]= helper(n-2) *2;
    return lookup[n];
}
int main()
{
//     #include <typeinfo>
// cout << typeid(pow(2, 5)).name() << endl;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    lookup[2]=2;
    int tc;
    cin>>tc;
   if(tc%2==0)
   {
    helper(tc);
    cout<<lookup[tc]<<"\n";
   }
   else cout<<"0"<<"\n";
    return 0;
}