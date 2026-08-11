#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n;cin>>n;
    string s;cin>>s;
    map<char,int> mp;
    int count=0;
    vector<int> distinct(n,0); // it will containt the distinct strings possilbe till idx i
    for(int i(0);i<n;i++){
        mp[s[i]]++;
        if(mp[s[i]]==1){
            count++;
        }
        distinct[i]=count;
    }
    int ans=0;
    for(int i(0);i<n;i++){
        ans += distinct[i];
    }
    cout<<ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}