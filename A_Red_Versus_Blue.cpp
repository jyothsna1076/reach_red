#include<bits/stdc++.h>
using namespace std;
void helper(vector<char> &arr,int l, int r,int count,bool pushleft)
{   if(count==0 || r<l)
    {
        return ;
    }
    int el= (r-l)/2;
    arr[l+el]='B';
    count--;
    int leftbelements=(count+1)/2;
    if(!pushleft)
    {
        leftbelements=count-leftbelements;
    }
    helper(arr,l,l+el-1,leftbelements,true);
    helper(arr,l+el+1,r,count-leftbelements,false);

    return;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,r,b;
        cin>>n>>r>>b;
        vector<char> arr(n);
        helper(arr,0,n-1,b,false);
        for(int i=0;i<n;i++)
        {
            if(arr[i]!='B')cout<<"R";
            else cout<<"B";
        }
        cout<<endl;
    }
    return 0;
}