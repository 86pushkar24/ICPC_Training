#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int y; cin>>y;
    
    for(int i=y+1; i<10000; i++){
        
        int freq[10]; // cnt of each digit in year in i
        
        // for(int j=0;j<10;j++){
        //     freq[j]==0;
        // }
        memset(freq,0,sizeof(freq));
        
        int year = i; // 2013
        while(year > 0){
            int digit=year%10; // 3
            freq[digit]++;// 3 -- 1
            year=year/10; // 201
        }
        int flag=0;
        for(int i=0;i<10;i++){
            if(freq[i]>1){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i<<endl;
            break;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t;cin>>t;while(t--)
    push();
    return 0;
}