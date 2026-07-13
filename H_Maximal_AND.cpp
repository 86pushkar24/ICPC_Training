#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n),freq(31,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        // a[i] = 1010 & 1000 = 1000
        // 3rd bit is set or not = 2^3 = 1000
        for(int j=30;j>=0;j--){
            if(a[i] & (1<<j)) freq[j]++;
        }
    }
    int ans=0;
    // n 1s present at that idx or not
    // if they are - AND
    // if not : utilize k operations
    for(int i=30;i>=0;i--){
        int reqd_ops = n - freq[i]; // 4 - 2 = 2
        if(reqd_ops <= k){
            k-=reqd_ops; // utilized
            ans += (1<<i); // contribute to AND
        }
    }
    cout<<ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}