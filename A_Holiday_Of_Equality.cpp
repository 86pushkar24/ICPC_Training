#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    // int max1=* max_element(a,a+n); // imp function
    int maxi=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=maxi-a[i];
    }
    cout<<ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t;cin>>t;while(t--)
    push();
    return 0;
}