// https://codeforces.com/contest/1881/problem/D
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> primeCount;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            for(int j = 2; j * j <= x; j++){
                while(x % j == 0){
                    primeCount[j]++;
                    x /= j;
                }
            }
            if(x > 1) primeCount[x]++;
        }
        bool possible = true;
        for(auto [prime, count] : primeCount){
            if(count % n != 0){
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
}