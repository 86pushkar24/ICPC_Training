/*
*	Created: 02.10.2026 13:11:27 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;
#define int long long
#define MOD 998244353
#define MAXN 60
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int C[MAXN+1][MAXN+1];
    C[0][0]=1;
    for(int i=1;i<=MAXN;i++){
        C[i][0]=1;
        C[i][i]=1;
        for(int j=1;j<i;j++){
            C[i][j]=(C[i-1][j-1]+C[i-1][j])%MOD;
        }
    }
    int alex[MAXN+1]={};
    int boris[MAXN+1]={};
    int draw[MAXN+1]={};

    alex[2]=1;
    boris[2]=0;
    draw[2]=1;
    for(int i=4;i<=MAXN;i+=2){
        alex[i]=(C[i-1][i/2 - 1]+ boris[i-2])%MOD;
        boris[i]=(C[i-2][i/2]+alex[i-2])%MOD;
        draw[i]= 1;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<alex[n]<<" "<<boris[n]<<" "<<draw[n]<<"\n";
    }
    return 0;
}
