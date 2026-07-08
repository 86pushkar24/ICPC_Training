#include "bits/stdc++.h"
using namespace std;



int main(){
    int n;
    cin >> n;
    
    bool is_hard = false;
    for(int i=0; i<n; i++){
        int x;cin>>x; // 0 0 0 1 0 0 0 1
        // these are very small optimizations
        if(x==1){ 
            is_hard = true;
            break;
        }
    }
    
    if(is_hard){
        cout << "HARD\n";
    }
    else{
        cout << "EASY\n";
    }
    
    return 0;
}