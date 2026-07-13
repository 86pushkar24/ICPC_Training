#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n;
    cin>>n;
    vector<pair<int,int>> v; // {frq,idx}
    for(int idx=0;idx<n;idx++){
        int freq;
        cin>>freq;
        v.push_back({freq,idx});
    } 
    // {3,0}  {3,0} {10,2}  {3,0}  {1,4}
    sort(v.begin(),v.end()); // ascending -> 1st element frq : from smaller to larger
    // {1,4} {3,0} {6, } {8, } {10 , }
    vector<int> ans(n);
    int curr = 1;
    int time=0;
    for(int i=n-1;i>=0;i--){
        ans[v[i].second] = curr;
        time += (2*v[i].first*abs(curr)); // 10 -> 1 : 2*10*abs(1) // divan : (0,0)
        // curr :  1 => -1 => 2 => -2
        if(curr>0){ // 2
            curr*=-1; // -2
        }
        else{ // -1 
            curr*=-1; // 1
            curr++; // 1+1 = 2
        }
    }
    cout<<time<<endl;
    for(auto it:ans)cout<<it<<" ";
    cout<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}