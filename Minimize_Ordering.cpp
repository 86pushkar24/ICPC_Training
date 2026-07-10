#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    string s;
    cin>>s;
    int n=s.size();
    int arr[26];
    memset(arr,0,sizeof(arr));
    for(int i(0);i<n;i++){
        // a 
        arr[s[i]-'a']++;
    }
    string ans="";
    for(int i(0);i<26;i++){
        char c=i+'a';
        while(arr[i]>0){
            ans+=c;
            arr[i]--;
        }
    }
    cout<<ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t;cin>>t;while(t--)
    push();
    return 0;
}