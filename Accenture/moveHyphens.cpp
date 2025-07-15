#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0;
    string ans1;
    string ans2;
    for(int i=0;i<s.size();i++){
        if(s[i]=='-'){
            ans1+=s[i];
            count++;
        }
        else ans2+=s[i];
    }
    if(count ==0 ) cout<<s<<endl;
    string ans=ans1+ans2;
    cout<<ans;
    
    return 0;
}
