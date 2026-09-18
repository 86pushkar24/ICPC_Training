/*
*	Created: 18.09.2026 10:09:39 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // a[i] has already used in our answer or not
    vector<bool> used(n,false);
    vector<int> ans;
    int cur = 0; // or of all elements
    // cur can improve at most 30 times because 2^30 > 10^9
    while(true){

        int bestIndex = -1;
        int bestOR = cur; // best prefix OR we can currently get
        // try every unused ele and see if it improves cur
        for(int i=0;i<n;i++){
            if(used[i]) continue;
            int newOR = cur | a[i];
            if(newOR > bestOR){
                bestOR = newOR;
                bestIndex = i;
            }
        }
        if(bestIndex == -1) break;
        used[bestIndex] = true;
        ans.push_back(a[bestIndex]);
        cur |= a[bestIndex];
    }
    // add remaining elements in any order
    for(int i=0;i<n;i++){
        if(!used[i]){
            ans.push_back(a[i]);
        }
    }
    for(int x : ans){
        cout<<x<<" ";
    }
    cout<<"\n";
}
// greedy state : bit changes
// optimize by this  = O(n*b) where b = 30

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
