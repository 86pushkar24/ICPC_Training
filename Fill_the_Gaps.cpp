#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Solution code
void push(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // 2 5 1 2
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
        if(arr[i]>arr[i+1]){ // 5 1
            int temp=arr[i]-1; // 4 
            while(temp>arr[i+1]){ // 4 > 1
                cout<<temp<<" ";
                temp--;
            }
        }
        else{ // 3 7
            int temp=arr[i]+1;
            while(temp<arr[i+1]){ // 4 < 7
                cout<<temp<<" ";
                temp++;
            }
        }
    }
    cout<<arr[n-1]<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t;cin>>t;while(t--)
    push();
    return 0;
}