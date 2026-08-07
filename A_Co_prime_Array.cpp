#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n;
    cin>>n;
    int a[n];
    int check[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        check[i]=0;
    }
    int k(0);
    for(int i=0;i<n-1;i++){
        if(__gcd(a[i],a[i+1])!=1){ // O(log(min(a[i],a[i+1])))
            // a[i] = 10^9 : TC : O(log(10^9)) ~ 30
            check[i]=1;
            k++;
        }
    }
    cout<<k<<endl;
    for(int i(0);i<n;i++){
        cout<<a[i]<<" ";
        if(check[i])cout<<1<<" ";
    }
    cout<<endl;
}
// TC : O(O(log(min(a[i],a[i+1])))*N) => O(30 * 1000) = 30,000 ops <<< 1e7 ops
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t;cin>>t;while(t--)
    push();
    return 0;
}