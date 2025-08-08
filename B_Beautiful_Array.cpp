#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int j=0;
    while(j<tc)
    {int n,k,b;
        long long s;
        cin>>n>>k>>b>>s;
        // if(j==135) 
        // {cout<<n<<k<<b<<s<<endl;
        //     cout<<endl;
        //     cout<<endl;
        //      cout<<endl;
        // }
        vector<long long > arr(n,0);
        if(1LL*b*k >s || 1LL*b*k + 1LL*n*(k-1)<s) cout<<-1<<endl;
        else{


            long long remainder= s- 1LL*b*k;
            // if(remainder!=0)
            // {
            
            int i=0;
            if(b!=0) 
            {
                arr[0]= 1LL*b*k;
            }
            long long  buff= remainder/(n-i);
            long long extrabufftill= remainder%(n-i);
            if(buff>=k ||(extrabufftill && buff+1 >=k))cout<<"-1"<<endl;
            else{
            int temp=i;
            for(i;i<extrabufftill+temp;i++) arr[i]+=buff+1;
            for(i;i<n;i++) arr[i]+= buff;
            //}
            for(int i=0;i<n;i++) cout<<arr[i]<<" ";
            cout<<endl;
            }
        }
        
       j++;
    }
    return 0;
}