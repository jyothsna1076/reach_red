#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,r,b;
        cin>>n>>r>>b;
       int boxes= b+1;
       int rel= r/(b+1);
       int buff= r%(b+1);
       for(int i=1;i<=b+1;i++)
       {
            for(int j=0;j<rel;j++)
            {
                cout<<"R";
            }
            if(buff)
            {
                cout<<"R";
                buff--;
            }
            if(i!= b+1) cout<<"B";
       }
       cout<<endl;
    }
    return 0;
}