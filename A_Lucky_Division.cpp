#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
vector<int> lucky = {4,7,44,47,74,77,444,447,474,477,744,747,774,777}; // n = 1000
bool isLucky(int n){
    while(n>0){ // 1447
        int d = n%10; // 7
        if(d!=4 && d!=7) return false; 
        n/=10;
    }
    return true;
}
void push(){
    int n;
    cin>>n;
    bool ans = false;
    for(int i=1;i<=n;i++){
        if(n%i==0 && isLucky(i)){
            ans = true;
            break;
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t;cin>>t;while(t--)
    push();
    return 0;
}