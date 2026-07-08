#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// 0 1 2 3 4 5 6(0)

// Solution code
void push(){
    int n;cin>>n;
   vector<int> count(102,0);
   for(int i(0);i<n;i++){
       int x;
       cin>>x;
       count[x]++; // updating my freq array
   }
   
   int mex_A = 0;
   while(count[mex_A] >= 1){
       mex_A++;
   }
   
   int mex_B = 0;
   while(count[mex_B] >= 2){
       mex_B++;
   }
   
   cout << mex_A + mex_B << endl;
   
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}