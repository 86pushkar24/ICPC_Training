#include "bits/stdc++.h"
using namespace std;


// i don't remember ASCII value 
// C++ - we directly compare by characters
int main(){
    string s;
    cin>>s;
    int lowercase = 0 , uppercase = 0;
    for(int i=0;i<s.size();i++){
        if('a' <= s[i] && s[i] <= 'z'){
            lowercase++;
        }
        else uppercase++;
    }
    
    if(lowercase < uppercase){
        for(int i=0;i<s.size();i++){
            s[i] = toupper(s[i]);
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            s[i] = tolower(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}