/*
*	Created: 27.08.2026 10:53:04 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n;
    cin>>n;
    int m = (n *(n-1))/2; // size of array B
    vector<int> B(m);
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    // O(mlogm) for sorting the array B
    sort(B.begin(),B.end());

    int x = n-1 , i(0);

    while(x > 0){ // n-1 pairs
        cout<<B[i]<<" "; // printed n-1
        i += x; // i from 0 to n-1, then n-1 to n-2, then n-2 to n-3 and so on
        x--; // n-1 pairs are printed, then n-2 pairs are printed and so on
    }
    cout<<"10000000000\n"; // printing a large number to ensure that it is not part of the array A
}

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
