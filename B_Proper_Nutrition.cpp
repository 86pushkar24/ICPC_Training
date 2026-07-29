#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n,a,b;
    cin>>n>>a>>b;
    int X(-1) , Y;
    for(Y=0; Y<=1e7; Y++){
        if((n - Y*b) % a == 0 && (n- Y*b) >= 0){
            X = (n - Y * b) / a;
            break;
        }
    }
    if(X == -1){
        cout<<"NO\n";
    }
    else{
        cout << "YES\n" << X << " " << Y;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t;cin>>t;while(t--)
    push();
    return 0;
}