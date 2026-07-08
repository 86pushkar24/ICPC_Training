#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int k;cin>>k;
    int hour=21;
    if(k>=60){
        hour=22;
        k-=60;
    }
    cout<<hour<<":";
    if(k<10){
        cout<<0<<k<<endl;
    }
    else{
        cout<<k<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t;cin>>t;while(t--)
    push();
    return 0;
}