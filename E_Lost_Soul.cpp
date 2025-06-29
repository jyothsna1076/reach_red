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
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i]; 
        set<int> z1;
        set<int> z2;

        bool found= false;
        

        for(int i= n-1; i>=0;i--)
        {   if(i+1 <n)
            {
                if(a[i]== a[i+1]    || b[i]==b[i+1])
                {
                    cout<<i+1<<endl;
                found= true;
                break;
                }
            }
            if(a[i]== b[i] || (z1.find(a[i])!= z1.end() || z2.find(a[i])!= z2.end() ) || (z2.find(b[i])!= z2.end() || z1.find(b[i])!= z1.end())) 
            {
                cout<<i+1<<endl;
                found= true;
                break;
            }
            else{
                    if(i+1 <n)
                    {
                    z1.insert(a[i+1]);
                    z2.insert(b[i+1]);
                    }
               z1.swap(z2);
            }
        }
        if(!found) cout<<"0"<<endl;
    }
}