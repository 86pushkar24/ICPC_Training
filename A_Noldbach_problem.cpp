#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code 
// TC : O(N*sqrt(n) + O(m*m))
// TC : O(10^3*31) + O()) -> 10^4 operations
// testcases : 10^5 * 10^4 --> 10^9 : TLE -- Precompute : 10^5 + 10^4 ~ 10^5 ops.
int MAXN = 1e5;
vector<int> primes; // global scope : 10^7 
void push(){
    int n,k;
    cin>>n>>k;
    int ans=0;
    // int a[n]; 10^5 
    int m=primes.size();
    for(int i=0;i<m-1;i++){
        int temp = primes[i] + primes[i+1] + 1;
        bool flag = false;
        for(int j=0;j<m;j++){
            if(primes[j]==temp){
                flag=true;
                break;
            }
        }
        if(flag)ans++;
    }
    if(ans>=k){ // atleast k primes
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // precompute 
    for(int i(0);i<=MAXN;i++){ // 16
        int cnt=0;
        for(int j=1;j*j<=i;j++){ // 4
            if(i%j==0){
                cnt++;
                if(i/j != j){ // 4 4 
                    cnt++;
                }
            }
        }
        if(cnt==2){ // 1 and itself
            primes.push_back(i);
        }
    }
    int t;cin>>t;while(t--)
    push();
    return 0;
}