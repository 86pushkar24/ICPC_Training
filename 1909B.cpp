/*
*	Created: 29.09.2026 10:30:04 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int k = 2;
    while(true){
        int first = a[0] % k;
        bool ok = true;
        for(int i = 1; i < n; i++){
            if(a[i] % k != first){
                ok = false;
                break;
            }
        }
        if(!ok){
            cout << k << endl;
            break;
        }
        k*= 2;
    }
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
