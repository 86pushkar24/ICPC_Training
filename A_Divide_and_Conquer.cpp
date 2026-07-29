#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n;
    cin>>n;
    int a[n];
    int odd = 0;
    for(int i(0);i<n;i++){
        cin>>a[i];
        if(a[i]%2!=0)odd++;
    }
    int min_ops = INT_MAX;
    if(odd%2==0){ // # of odd nos are even
        cout<<"0\n";
    }
    else{ // // # of odd nos are odd -> perform ops
        for(int i=0;i<n;i++){
            if(a[i]%2==0){ // even elemenet
                int ops=0;
                while(a[i]%2==0){
                    ops++;
                    a[i]/=2;
                }
                min_ops = min(min_ops,ops);
            }
            else{ // odd element
                int ops=0;
                while(a[i]%2!=0){
                    ops++;
                    a[i]/=2;
                }
                min_ops = min(min_ops,ops);
            }
        }
        cout<<min_ops<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    push();
    return 0;
}