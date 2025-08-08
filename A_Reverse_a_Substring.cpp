#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int  found= -1;
    for(int i =1;i<n;i++)
    {
        if(s[i-1]> s[i])
        {
            s[i-1]= s[i-1]^s[i];
            s[i]= s[i]^s[i-1];
            s[i-1]= s[i-1]^s[i];
            found= i-1;
            break;
        }
    }
    if(found==-1) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<found+1<<" "<<found+2<<endl;
       // cout<<endl;
    }
    return 0;
}