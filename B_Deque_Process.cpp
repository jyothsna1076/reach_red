#include <bits/stdc++.h>
using namespace std;



int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &a : arr) cin >> a;

        int l = 0, r = n - 1;
        string ans = "";
        bool increasing = false;
        while(l<=r)
        {
                if(arr[l]>arr[r])
                {
                    if(increasing) ans+="RL";
                    else ans+= "LR";
                    increasing= !increasing;
                    l++;
                    r--;
                }
                else if(arr[l]< arr[r])
                {
                   if(increasing) ans+="LR";
                    else ans+= "RL";
                    increasing= !increasing;
                    l++;r--;
                }
                else{
                    ans+='L';
                    l++;
                }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
