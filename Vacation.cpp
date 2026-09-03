/*
*	Created: 03.09.2026 10:45:53 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    // declaring my 2D prefix sum
    vector<vector<int>> pref(n+1,vector<int>(m+1,0)); // O(N+1 * M+1)
    // Builduing my 2D Prefix sum (converted my matrix 0 -> 1 else 1 -> 0)
    // O(N*M)
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int x;cin>>x;
            // conversion is happenign
            int zero = (x==0)? 1 : 0;
            // prefix sum is filling up
            pref[i][j] = pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1] + zero; // 2d prefix sum
        }
    }
    int q;cin>>q;
    // O(1 * Q) = O(Q)
    while(q--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        // checking the number of zeroes
        // 0(1)
        int zeros = pref[C][D] - pref[A-1][D] - pref[C][B-1] + pref[A-1][B-1];
        // min_cost = 0 if we got some zeroes else it will be 1
        if(zeros>0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}

// TC : O(NM + Q) : N*M <= 2 * 10^5 Q : 2*10^5 =>. 4 * 10^5 <<<< 10^8
// SC : O(NM) 

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
