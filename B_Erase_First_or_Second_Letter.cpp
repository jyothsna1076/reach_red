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
   string s;
   cin>>s;
   set<char> st;
   st.insert(s[0]);
   long long ans=0;
   for(int i=1;i<n;i++)
   {
        st.insert(s[i]);
        ans+= st.size();
   }
    cout<<ans+1<<endl;
    }
    return 0;
}