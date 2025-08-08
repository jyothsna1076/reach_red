#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int w,h;
        cin>>w>>h;
       long long maximum= 0;
        for(int i=0;i<4;i++)
        {
            int k;
            cin>>k;
            vector<int> arr(k);
            for(int i=0;i<k;i++) cin>>arr[i];
            long long area= (arr[k-1]-arr[0]) ;
            area*= i<=1? h:w;
            maximum= max(maximum, area) ;           

        }
        cout<<maximum<<endl;
       
    }
    return 0;
}