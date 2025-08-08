#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int w,h;
        cin>>w,h;
        vector<vector<int>> table(4,vector<int>(2,-1));
        for(int i=0;i<4;i++)
        {
            int k;
            cin>>k;
            vector<int> arr(k);
            for(int i=0;i<k;i++) cin>>arr[i];
            if(k!=0)
            {
                table[i][0]= *max_element(arr.begin(), arr.end());
                table[i][1]= *min_element(arr.begin(), arr.end());
            }
            long long maxarea= INT_MIN;
            int breadth= table[0][0]- table[0][1];
            if(table[1][0]!= -1) maxarea= max(maxarea, 1LL*breadth*h);
            else{
                int height= max(table[2][0], table[3][0]);
                  maxarea= max(maxarea, 1LL*breadth*height);  
            }
           


        }
       
    }
    return 0;
}