#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int j=0;
    while(j<tc)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        //if(j==159) cout<<s<<endl;
        unordered_map<int,int> fmap1;
        unordered_map<int,int> fmap2;
        int maxi=0;
        int i=0;
        int temp=0;
        for( i=0;i<n;i++)
        {
            fmap2[s[i]-'a']+=1;  
        }
        int size2= fmap2.size();
        for(int i=0;i<n;i++)
        {
            fmap1[s[i]-'a']++;
            fmap2[s[i]-'a']--;
            if(fmap2[(s[i]-'a')]==0) size2--;
            int size1= fmap1.size();
            maxi=max(maxi,size1+size2 );
            //cout<<maxi<<" ";
        }
       cout<<maxi<<endl;
       j++;
    }
    return 0;
}