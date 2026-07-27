#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool isPrime(int x){
    for(int d = 2; d * d <= x; d++){
        if(x % d == 0) return false;
    }
    return true;
}
// Solution code
void push(){
    int a,b;
    cin>>a>>b;
    if(((a-b) == 1) && isPrime(a+b)) cout << "YES\n";
    else cout << "NO\n";

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}