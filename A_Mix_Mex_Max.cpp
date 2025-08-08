#include<bits/stdc++.h>
using namespace std;
template<typename Iterator>
int mex(Iterator start, Iterator end)
{
    unordered_set<int> s(start,end);
    for(int i=0; ;i++)
    {
        if(!s.count(i)) return i;
    }
    return -1;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(auto &a:arr) 
        {cin>>a;
            //cout<<a<<" ";
        }
        bool found= false;
        int temp=-1;
        for(auto a:arr)
        {   if(a==0)
            {
                found= true;
                break;
            }
            if(a!=-1 )
            {   if(temp!= -1)
                {
                if(a!= temp) 
                {found= true; 
                    break;
                }
                }
                else{
                    temp=a;
                }
            }
            
        }
        if(found) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}