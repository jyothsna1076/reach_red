// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int tc;
//     cin>>tc;
//     while(tc--)
//     {
//         int n;
//         cin>>n;
//         vector<int> arr(n);
//         for(auto &a: arr) cin>>a;
//         int xori= 0;
//         for(int i=1;i<n-1;i++)
//         {
//             xori^=arr[i];
//         }
//         if(n&1) 
//         {
//             if(arr[0]==0) 
//             {
//                 xori^= arr[n-1] ;
//                 if (xori==0)
//                 {
//                     cout<<"1"<<endl;
//                     cout<<"1 "<<n-1<<endl;
//                 }
//                 else{
//                     cout<<"2"<<endl;
//                     cout<<"1 "<<n-1<<endl;
//                     cout<<"1 "<<n-1<<endl;
//                 }
//             }
//             else if(arr[n-1]==0)
//             {
//                  xori^= arr[0] ;
//                 if (xori==0)
//                 {
//                     cout<<"1"<<endl;
//                     cout<<"0 "<<n-2<<endl;
//                 }
//                 else{
//                     cout<<"2"<<endl;
//                     cout<<"0 "<<n-2<<endl;
//                     cout<<"0 "<<n-2<<endl;
//                 }
//             }
//             else{}
//         }
//         else
//         {
//             cout<<"2"<<endl;
//             cout<<"0 "<<n-1<<endl;
//         }
//     }
//     return 0;
// }
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
        for(auto &a: arr) cin>>a;
        if(n&1) 
        {
            cout<< "4"<<endl;
            if((n/2)&1)
            {
            cout<<"1 "<<n/2+1<<endl;
            cout<<"1 "<<n/2+1<<endl;
            cout<<n/2+1<<" "<<n<<endl;
            cout<<n/2+1<<" "<<n<<endl;
            }
            else{
                cout<<"1 "<<n/2<<endl;
            cout<<"1 "<<n/2<<endl;
            cout<<n/2<<" "<<n<<endl;
            cout<<n/2<<" "<<n<<endl;
            }
        }
        else
        {
            cout<<"2"<<endl;
            cout<<"1 "<<n<<endl;
            cout<<"1 "<<n<<endl;
        }
    }
    return 0;
}