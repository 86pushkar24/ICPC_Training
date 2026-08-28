/*
*	Created: 28.08.2026 10:58:44 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> c(n);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    vector<int> last(k,-1); // last index of each color
    vector<int> max_step(k,0); // max step for each color
    vector<int> max_setp2(k,0); // second last step for each color

    // scan over all the planks
    for(int i = 0; i< n; i++){
        int color = c[i]-1; // 0-indexed color

        int step = i - last[color]; // step from last occurrence of this color

        if(step > max_step[color]){
            max_setp2[color] = max_step[color]; // update second last step
            max_step[color] = step; // update max step
        } else if(step > max_setp2[color]){
            max_setp2[color] = step; // update second last step
        }

        last[color] = i; // update last occurrence of this color
    }
    // distance from last occurrence to the end of the array
    for(int color = 0; color < k; color++){
        int step = n - last[color]; // step from last occurrence to the end
        if(step > max_step[color]){
            max_setp2[color] = max_step[color]; // update second last step
            max_step[color] = step; // update max step
        } else if(step > max_setp2[color]){
            max_setp2[color] = step; // update second last step
        }  
    }

    int answer = INT_MAX;
    for(int color = 0; color < k; color++){
        int after_repaint = max((max_step[color] + 1) / 2, max_setp2[color]); // max step after repainting this color
        answer = min(answer, after_repaint);
    }
    cout<<answer-1<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
