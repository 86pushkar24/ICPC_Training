#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n; cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<n;j++){
            arr[i][j]=s[j]-'0'; // string to int conversion for storing 
        }
    }
    int prev=arr[0][0];
    for(int j=0;j<n-1;j++){
        arr[j][0]=arr[j+1][0];
    }
    for(int j=0;j<n-1;j++){
        arr[n-1][j]=arr[n-1][j+1];
    }
    for(int j=n-1;j>0;j--){
        arr[j][n-1]=arr[j-1][n-1];
    }
    for(int j=n-1;j>1;j--){
        arr[0][j]=arr[0][j-1];
    }
    arr[0][1]=prev;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t;cin>>t;while(t--)
    push();
    return 0;
}