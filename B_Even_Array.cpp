#include "bits/stdc++.h"
using namespace std;


// i don't remember ASCII value 
// C++ - we directly compare by characters
int main(){
    int t;
    cin>>t;
    while(t--){ // loop t times
        int n;
        cin>>n;
        int a[n];
        
        int ei= 0 , oi = 0 , ee = 0 , oe = 0;
        
        int nmp =0;
        
        for(int i(0);i<n;i++){
            cin >> a[i];
            
            if(i%2 == 0) ei++;
            else oi++;
            
            if(a[i]%2 == 0) ee++;
            else oe++;
            
            if(i%2 != a[i]%2){
                nmp++;
            }
        }
        
        if(ei != ee || oi != oe){
            cout<<-1<<endl;
            continue;
        }
        
        cout << (nmp/2) << endl;
        
    }
    return 0;
}