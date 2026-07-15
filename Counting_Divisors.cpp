#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n;
    cin>>n;
    int ans(0);
    for(int i=1; i<= sqrt(n); i++){
        if(n%i==0){ // divides n
            ans++; // cnt for divisor
            if(n/i!=i){ // 6 6 => 36/6 != 6 
                ans++;
            }
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