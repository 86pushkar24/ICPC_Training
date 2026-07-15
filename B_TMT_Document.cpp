#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    vector<int> T,M;

    for(int i=0;i<n;i++){
        if(s[i]=='T'){
            T.push_back(i);
        }
        else{
            M.push_back(i);
        }
    }

    bool ans = true;

    if(T.size() != 2 * M.size()){
        ans = false;
    }
    else{
        int x = M.size();
        for(int i=0; i <= x-1; i++){
            // write our condition 
            if(! (T[i] < M[i] && M[i] < T[i+x]) ){
                ans = false;
            }
        }
    }

    if(ans) cout << "YES\n";
    else cout << "NO\n";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}