#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int l,r,k;
    cin>>l>>r>>k;
    // edge case : // [2] [4] [7] 
    if(l == r){
        if(l==1){ // [1] => gcd(a) == 1 : NO
            cout<<"NO\n";
            return;
        }
        else{
            cout<<"YES\n";
            return;
        }
    }
    int numodd=(r-l+1);
    if(numodd%2==1){ // total is odd
        numodd/=2;
        if(l%2==1 && r%2==1){
            numodd+=1;
        }
    }
    else{ // total is even
        numodd/=2;
    }
    if(numodd <= k){ // atmost do K operations
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}