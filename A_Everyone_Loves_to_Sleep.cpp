#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n,h,m;
    cin>>n>>h>>m;
    
    int sleep_time = h*60 + m;
    int ans = INT_MAX;
    
    for(int i(0) ; i< n; i++){
        int hour_i , min_i;
        cin >> hour_i >> min_i;
        
        int alarm_time = hour_i*60 + min_i;
        
        int diff = alarm_time - sleep_time;
        if(diff < 0) diff += 24*60;
        
        ans = min(ans,diff);
        
    }
    
    cout << ans / 60 << " " << ans % 60 << endl;
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}