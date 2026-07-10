#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x(0),y(0); // origin
    char dir = 'r'; // initial direction
    for(int i(0);i<n;i++){
        if(s[i]=='S'){
            if(dir == 'r') x++;
            else if(dir == 'l') x--;
            else if(dir == 't') y++;
            else y--;
        }
        else{
            if(dir == 'r') dir = 'd';
            else if(dir == 'd') dir = 'l';
            else if(dir == 't') dir = 'r';
            else dir = 't' ;
        }
    }
    cout << x << " " << y << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t;cin>>t;while(t--)
    push();
    return 0;
}