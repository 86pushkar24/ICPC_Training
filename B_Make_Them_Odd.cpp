#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n;
    cin>>n;
    int v[n];
    for(int i(0);i<n;i++)cin>>v[i];
    set<int> st; // store only unique even numbers
    for(int i(0);i<n;i++){ // O(N)
        while(v[i]%2==0){   // O(logN)
            st.insert(v[i]);
            v[i]/=2;
        }
    }
    cout<<st.size()<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}