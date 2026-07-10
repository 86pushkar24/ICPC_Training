#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// size 3e6+1; ==> global array
bool cnt[3000001];
// Solution code
void push(){
    int n,w;
    cin>>n>>w;
    int nums[n];
    for(int i(0);i<n;i++)cin>>nums[i];
    for(int i=0;i<3000001;i++){
        cnt[i]=false;
    }
    // 1 integer
    for(int i(0);i<n;i++)cnt[nums[i]]=true;
    // 2 integer
    for(int i(0);i<n;i++){
        for(int j=i+1;j<n;j++){
            cnt[nums[i]+nums[j]]=true;
        }
    }
    // 3 integer
    for(int i(0);i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                cnt[nums[i]+nums[j]+nums[k]]=true;
            }
        }
    }
    int ans=0;
    for(int i=1;i<=w;i++){
        if(cnt[i]==true) ans++;
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