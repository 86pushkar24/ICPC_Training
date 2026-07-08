#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n;cin>>n;
    int val1=n%5;
    int val2=5-val1;
    if(val1<val2){
        cout<<n-val1;
    }
    else{
        cout<<n+val2;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t;cin>>t;while(t--)
    push();
    return 0;
}