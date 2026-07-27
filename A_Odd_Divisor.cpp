#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    long long n;
    cin>>n;
    // 26 -> 26 , 13 , 2 , 1
    while(n%2 == 0){ // if the number is even or not --> 26%2 = 0 
        n /= 2; // 13
    }
    // now , n will become some odd number
    if(n != 1) cout << "YES\n"; // 13 
    else cout << "NO\n";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}