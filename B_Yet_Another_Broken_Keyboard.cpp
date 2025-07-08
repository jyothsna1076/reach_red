#include<bits/stdc++.h>
using namespace std;

int main()
{
//     #include <typeinfo>
// cout << typeid(pow(2, 5)).name() << endl;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    unordered_set<char> works;
    char a;
    for(int i=0;i<k;i++) 
    {
        cin>>a;
        works.insert(a);
    }
    long long sub=0;
    int found=0;
    for(int i=0;i<n;i++)
    {
        if(works.find(s[i])== works.end())
        {
            sub+= (i+1-found)*(n-i);
            found++;
            cout<<sub<<" ";
        }
    }
    long long ans= (1LL*(n)*(n+1))/2;
    cout<<ans-sub<<"\n";
    return 0;
}