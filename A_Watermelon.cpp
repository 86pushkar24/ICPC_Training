#include <bits/stdc++.h>
using namespace std;

int main(){
    int w;
    cin >> w;
    // w==2 is the edge case
    if(w%2 != 0 || w==2){
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES\n";
    }
    return 0;
}