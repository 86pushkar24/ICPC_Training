#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b,c;
    long long mx = *max_element(a.begin(), a.end());
    for(int i(0); i<n; i++){
        if(a[i] != mx){
            b.push_back(a[i]);
        }else{
            c.push_back(a[i]);
        }
    }
    // all the elements are equal
    if(b.size() == 0){
        cout<<-1<<endl;
        return;
    }else{
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int i=0; i<b.size(); i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        for(int i=0; i<c.size(); i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}