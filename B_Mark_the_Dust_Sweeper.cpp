#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i(0);i<n;i++){
        cin>>a[i];
    }
    // 1e9 + 1e9 + 1e9 + 1e9 + .... 1e5 times
    // 1e9*1e5 = 1e14
    long long total_operations = 0;
    bool first_positive_value = false;
    for(int i = 0; i < n-1 ; i++){
        if(a[i] > 0){
            first_positive_value = true;
        }
        
        if(first_positive_value){
            if(a[i]==0){
                total_operations += 1;
            }
            else{
                total_operations += a[i];
            }
        }
    }
    
    cout << total_operations << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}