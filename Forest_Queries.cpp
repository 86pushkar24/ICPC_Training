/*
*	Created: 03.09.2026 09:16:32 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n,q;
    cin>>n>>q;

    vector<vector<int>> pref(n+1,vector<int>(n+1,0));
    for(int i=1;i<=n;i++){
        string s;
        cin>>s; // .*..
        for(int j=1;j<=n;j++){
            int tree = (s[j-1]=='*')? 1 : 0;
            pref[i][j] = pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1] + tree; // 2d prefix sum
        }
    }
    while(q--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int ans = pref[x2][y2] - pref[x1-1][y2] - pref[x2][y1-1] + pref[x1-1][y1-1];
        cout<<ans<<"\n";
    }
}

// dry run
/*
4 3
.*..
*.**
**..
****
2 2 3 4
3 1 3 1
1 1 2 2

pref array:
0 1 1 1


*/

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
