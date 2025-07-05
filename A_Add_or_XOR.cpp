#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        long long ans;
        if(a==b)
        {
            cout<<"0"<<endl;
        }
        else{
        if(b<a && ((a%2!=1 && b%2 !=0) || (a-b)>1)) cout<<"-1"<<endl;
        else if(b<a && a%2==1 && b%2==0)cout<<y<<endl;
        if(a<b)
        {
        if(x<=y)
        {
            cout<<(b-a)*x<<endl;
        }
        else{
            if((b%2==0 && a%2==0) ||(b%2==1 && a%2==1))
            {
                cout<< (b-a)/2 *x + (b-a)/2 *y<<endl;
            }
            else if(a%2==0)
            {
                cout<<(b-a+1)/2 *y + (b-a)/2 *x<<endl;
            }
            else{
                cout<<(b-a+1)/2 *x + (b-a)/2 *y<<endl;
            }
        }
        }
    }
}
    return 0;
}