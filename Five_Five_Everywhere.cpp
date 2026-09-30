#include<bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin>>N;
    const int LIMIT = 55555;
    vector<bool> isPrime(LIMIT+1,true);
    isPrime[0] = isPrime[1] = false;
    for(int i=2;i*i<=LIMIT;i++){
        if(!isPrime[i]){
            continue;
        }
        for(int multiple = i*i; multiple <= LIMIT; multiple += i){
            isPrime[multiple] = false;
        }
    }
    vector<int> answer;
    for(int i=2;i<=LIMIT && answer.size() < N;i++){
        if(isPrime[i] && i%5==1){
            answer.push_back(i);
        }
    }
    for(int x : answer){
        cout<<x<<" ";
    }
    cout<<endl;
}