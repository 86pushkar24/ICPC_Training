/*
*	Created: 27.08.2026 10:14:27 (GMT+5:30)
*/
// #include "bits/stdc++.h"
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

long long __gcd(long long a,long long b){
    if(b==0) return a;
    return __gcd(b,a%b);
}

long long lcm(long long a,long long b){
    return (a*b)/__gcd(a,b); // O(log(min(a,b)))
}

long long ap(long long start,long long end){
    long long sum = ((start + end) * (end - start + 1)) / 2;
    return sum;
}
void solve(){
    long long n,x,y;
    cin>>n>>x>>y;

    long long a = (n / x) - n / (lcm(x,y));
    long long b = (n / y) - n / (lcm(x,y));

    long long ans = ap(n-a+1,n) - ap(1LL,b); // O(1)
    cout<<ans<<"\n";
}

// Overall TC : O(log(min(x,y))) for each test case due to lcm calculation, which is efficient enough for the given constraints.

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
