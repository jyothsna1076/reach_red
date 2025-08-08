#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a, b;
        cin>>a>>b;
        int rem=(a-1)%4;
        int x=-1;
        if(rem== 0) x=a-1;
        else if(rem==1) x=1;
        else if(rem==2) x=a;
        else x=0;
        if(x==b) cout<<a<<endl;
        else
        {
            if((x^b) !=a) cout<<a+1<<endl;
            else 
            {
                cout<<a+2<<endl;
            } 
        }
    }
    return 0;
}