#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
bool fn(vector<int> v, int x){ // (1 3 1 2 3 1 1  , 1)
    int n=v.size(); // n = 7
    int i(0),j(n-1); // i = 1 , j = 6
    while(i<j){  // 3  <  3
        if(v[i]==x){ // i = 1
            i++;
        }else if(v[j]==x){ // j = 2
            j--; // ignoring both 
        }
        else if(v[i]!=v[j]){
            return false;
        }else{
           i++;
           j--; 
        }
    }
    return true;
}

void push(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i(0);i<n;i++){
        cin>>v[i];
    }
    bool ff = 1;
    for(int i=0;i<n-1-i;i++){
        if(v[i] != v[n-i-1]){
            ff = fn(v,v[i]) || fn(v,v[n-i-1]);
            break;
        }
    }
    if(ff)cout<<"YES\n";
    else cout<<"NO\n";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}