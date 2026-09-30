/*
*	Created: 30.09.2026 12:09:46 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;
#define int long long
#define MOD 1000000007
void solve(){
    int N;
    cin>>N;

    vector<int> primeCount(N+1,0);
    // factor every number from 2 to N and count the prime factors
    for(int i=2;i<=N;i++){
        int num=i;
        for(int j=2;j*j<=num;j++){
            while(num%j==0){
                primeCount[j]++;
                num/=j;
            }
        }
        if(num>1) primeCount[num]++;
    }
    int answer=1;
    // multiply the counts of prime factors + 1 to get the total number of divisors
    for(int i=2;i<=N;i++){
        if(primeCount[i]>0){
            answer*=(primeCount[i]+1);
            answer%=MOD;
        }
    }
    cout<<answer<<"\n";        
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
