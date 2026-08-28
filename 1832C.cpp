/*
*	Created: 28.08.2026 10:08:08 (GMT+5:30)
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
    // remove consecutive duplicates
    // equal adjacent contribue 0
    // not required to keep more than 1 copy of the same number
    vector<int> b;
    for(int x : a){
        if(b.empty() || b.back()!=x){
            b.push_back(x);
        }
    }
    if(b.size() == 1){
        cout<<1<<"\n";
        return;
    }
    int answer = 1; // first element is always counted
    for(int i=1;i<b.size()-1;i++){
        bool localMaximum = (b[i] > b[i-1] && b[i] > b[i+1]);
        bool localMinimum = (b[i] < b[i-1] && b[i] < b[i+1]);
        if(localMaximum || localMinimum){
            answer++;
        }
    }
    // last element is always counted
    answer++;
    cout<<answer<<"\n";
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
