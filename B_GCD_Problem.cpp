#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n;
    cin>>n;
    if(n%2==0){
        cout << 2 << " " << (n-1)-2 << " " << 1 << endl;
    }
    else{ // n-1 even : both are odd / even
        int half = (n-1)/2;
        if(half%2){ // 32
            cout << half-1 << " " << half+1 << " " << 1 << endl;
        }else{ // 31
            cout << half-2 << " " << half+2 << " " << 1 << endl;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}