#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        int xk,yk,xq,yq;
        cin>>xk>>yk>>xq>>yq;
       set<pair<int,int>> store;
       store.insert({xk+a,yk+b});
       store.insert({xk+a, yk-b});
       store.insert({xk-a, yk+b});
       store.insert({xk-a, yk-b});
       store.insert({xk+b,yk+a});
       store.insert({xk+b, yk-a});
       store.insert({xk-b, yk+a});
       store.insert({xk-b, yk-a});
       int ans=0;
       if(store.find({xq+a, yq+b}) != store.end())ans++;
       if(store.find({xq+a, yq-b})!= store.end()) ans++;
       if(store.find({xq-a, yq-b})!= store.end()) ans++;
       if(store.find({xq-a, yq+b})!= store.end()) ans++;
       if(store.find({xq+b, yq+a})!= store.end()) ans++;
       if(store.find({xq-b, yq+a})!= store.end()) ans++;
       if(store.find({xq+b, yq-a})!= store.end()) ans++;
       if(store.find({xq-b, yq-a})!= store.end()) ans++;
       if(a==b) cout<<ans/2<<endl; 
       else cout<<ans<<endl;


    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// struct pair_hash {
//     size_t operator()(const pair<int, int>& p) const {
//         return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
//     }
// };

// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int a, b;
//         cin >> a >> b;
//         int xk, yk, xq, yq;
//         cin >> xk >> yk >> xq >> yq;

//         unordered_set<pair<int, int>, pair_hash> store;

//         // All knight moves from king
//         vector<pair<int, int>> moves = {
//             {xk+a, yk+b}, {xk+a, yk-b}, {xk-a, yk+b}, {xk-a, yk-b},
//             {xk+b, yk+a}, {xk+b, yk-a}, {xk-b, yk+a}, {xk-b, yk-a}
//         };

//         for (auto p : moves)
//             store.insert(p);

//         int ans = 0;

//         // All knight moves from queen
//         vector<pair<int, int>> qmoves = {
//             {xq+a, yq+b}, {xq+a, yq-b}, {xq-a, yq+b}, {xq-a, yq-b},
//             {xq+b, yq+a}, {xq+b, yq-a}, {xq-b, yq+a}, {xq-b, yq-a}
//         };

//         for (auto p : qmoves)
//             if (store.count(p)) ans++;
//         if(a==b) cout<<ans/2<<endl;
//         else cout << ans << endl;
//     }
//     return 0;
// }
