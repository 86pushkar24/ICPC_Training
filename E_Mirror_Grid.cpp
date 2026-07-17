#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n;
    cin>>n;
    string mat[n];
    for(int i=0;i<n;i++) cin>>mat[i];
    // find the are which we need to check
    int x = n/2 , y = n/2;
    if(n%2 == 1){
        y++;
    }

    // check 1s and 0s in the area
    int ans = 0;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            int ones = 0;
            ones += mat[i][j] - '0'; // '1' - '0' = ascii value will be : 1
            ones += mat[j][n-i-1] - '0';
            ones += mat[n-i-1][n-j-1] - '0';
            ones += mat[n-j-1][i] -'0';
            // 4 0 , 3 1 , 2 2 , 1 3 , 0 4
            if(ones == 2) ans += 2;
            else if(ones == 1 || ones == 3) ans += 1;
        }
    }
    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}