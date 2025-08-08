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
       vector<int> arra(n);
       vector<int> arrb(n);
       for(auto &a: arra) cin>>a;
       for(auto &a: arrb) cin>>a;
        int maxielsa=0;
        int maxielsb=1;
        map<int,int> fmap1;
        map<int,int> fmap2;
        maxielsa=1;
        fmap1[arra[0]]=1;
        fmap2[arrb[0]]=1;
        for(int i=1;i<n;i++)
        {
            if(arra[i]==arra[i-1]) maxielsa++;
            else maxielsa=1;
            if(arrb[i]==arrb[i-1]) maxielsb++;
            else maxielsb=1;
            if(maxielsa > fmap1[arra[i]]) fmap1[arra[i]]= maxielsa;
            if(maxielsb > fmap2[arrb[i]])   fmap2[arrb[i]]= maxielsb;
            //cout<<arra[i]<<" "<<arrb[i]<<" "<<fmap1[arra[i]]<<" "<<fmap2[arrb[i]]<<endl;
        }
        // for(auto a: fmap1) cout<<a.first <<" "<< a.second<<endl;
        // cout<<endl;
        // for(auto a: fmap2) cout<<a.first <<" "<< a.second<<endl;
        int i=1;
        int maxi=0;
        while(i<= 2*n)
        {   //cout<<i<<" "<<fmap1[i]<<" ";
            fmap1[i]+= fmap2[i];
            //cout<<fmap1[i]<<endl;
            maxi= max(maxi, fmap1[i]);
            i++;
        }
        cout<<maxi<<endl;
       j++;
    }
    return 0;
}