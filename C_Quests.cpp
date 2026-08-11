#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n),b(n);
    for(int i(0);i<n;i++){
        cin>>a[i];
    }
    for(int i(0);i<n;i++){
        cin>>b[i];
    }
    int maxx = 0; // max which we encountered in array b upto idx i-1;
    int sum = 0; // sum up the values for the first time quest : a 
    int ans = 0;
    // n = 5 , k = 7 -- max we can iterate is upto 5 only
    // n = 5 ; k = 3 -- max we can iterate only upto k
    for(int i=0; i < min(n,k); i++){
        sum += a[i];
        maxx = max(maxx,b[i]);
        ans = max(ans , sum + (k-i-1)*maxx);
    }
    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}