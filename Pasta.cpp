#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code : brute forced : m,n == 1000 , 1e5 
/// tc : o(n*n) == O(10^6) , 1e10 : Not Acceptable : TLE : Map , hashing , frequency 
void push(){
    int n,m;cin>>n>>m;
    int a[n],b[n];
    for(int i(0);i<n;i++)cin>>a[i];
    for(int i(0);i<m;i++)cin>>b[i];
    bool ans=true;
    for(int i(0);i<m;i++){ // 2ns array
        bool flag=false;
        for(int j(0);j<n;j++){ // 1st array : noodle length
            if(a[j]==b[i]){
                a[j]=-1; // 4 6 2 1 3 2 => -1 6 2 1 3 2
                flag=true; // element is present or not in 1st array
                // n : 4 6 4 4 2 1 4 , m : 4 5 6 1
                break;
            }
        }
        if(flag==false){
            ans=false;
            break;
        }
    }
    if(ans==true)cout<<"Yes\n";
    else cout<<"No\n";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t;cin>>t;while(t--)
    push();
    return 0;
}