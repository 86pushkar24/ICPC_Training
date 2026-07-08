#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int h,w;
    cin>>h>>w;
    int a[h][w],b[h][w];
    for(int i=0;i<h;i++){
        string s; cin>>s;
        for(int j=0;j<w;j++){
            if(s[j]=='.')a[i][j]=0;
            else a[i][j]=1;
        }
    }
    for(int i=0;i<h;i++){
        string s; cin>>s;
        for(int j=0;j<w;j++){
            if(s[j]=='.')b[i][j]=0;
            else b[i][j]=1;
        }
    }
    for(int s=0;s<h;s++){
        for(int t=0;t<w;t++){
            
            bool done = true; // a == b
            
            for(int i(0);i<h;i++){
                for(int j=0;j<w;j++){
                    
                    if(a[i][j] != b[(i+s)%h][(j+t)%w]){
                        done=false;
                        break;
                    }
                }
                if(!done)break;
            }
            
            if(done){
                cout<<"Yes";
                return;
            }
        }
    }
    cout<<"No";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t;cin>>t;while(t--)
    push();
    return 0;
}