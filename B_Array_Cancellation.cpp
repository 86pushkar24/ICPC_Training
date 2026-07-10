#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
   int n;
   cin>>n;
   
   vector<int> a(n);
   for(int i=0;i<n;i++) cin>>a[i];

    int avl_pos=0;

    for(int i=0;i<n;i++){
        if(a[i]>0){
            avl_pos += a[i];
        }
        else{
            // only happen when pos is avl
            if(avl_pos>0){
                // avl_pos = 4 and a[i]= -7 
                avl_pos = avl_pos - (abs(a[i])); // avl_pos = -3
            }
            avl_pos = max(0LL,avl_pos);
        }
    }
    cout<<avl_pos<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}