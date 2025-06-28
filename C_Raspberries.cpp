#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, k;
        cin>>n>>k;
        vector<int> arr(n);
        int maxi= 0;
        int found1=0;
        int found2=0;
        for(auto &a:arr)
        { 
            cin>>a;
            maxi= max(maxi, a%k);
            if(a%k==0) maxi=k;
            if(k==4 && a%k ==1) found1++;
            else if(k==4 && a%k==2) found2++;
        }
        if(found1>=2) maxi= max(maxi,2);
        if(found2>=2) maxi= max(maxi,k);
        else if(found1>=1 && found2==1) maxi= max(maxi,k-1);
        cout<<k-maxi<<endl;
    }
    return 0;
}