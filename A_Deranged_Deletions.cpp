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
        vector<int> arr(n);
        vector<int> arrb(n);
        for(int i=0;i<n;i++) 
        {   cin>>arr[i];
            arrb[i]= arr[i];
        }
        // for(int i=0;i<n;i++)
        // cout<<arr[i]<<" "<<arrb[i]<<endl;
sort(arrb.begin(), arrb.end());
//int equal=0;
// for(int i=0;i<n;i++)
//         cout<<arr[i]<<" "<<arrb[i]<<endl;
for(int i=0;i<arr.size();i++)
{
if(arr[i]== arrb[i])
{
   arr.erase(arr.begin()+i);
   arrb.erase(arrb.begin()+i);
   i--;
   //equal++;
}
}
int size= arr.size();
if(size) 
{cout<<"Yes"<<endl;
    cout<<size<<endl;
for(int j=0;j<size;j++) cout<<arr[j]<<" ";
cout<<endl;
}
else{
    cout<<"No"<<endl;}
    }
    return 0;
}