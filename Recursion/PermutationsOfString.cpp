#include <bits/stdc++.h>
using namespace std;
#include <iostream>

void generateperm(string &s,vector<string>&ans,int idx){
    if(idx==s.size()){
        ans.push_back(s);
        return ;
    }
    for(int i=idx;i<s.size();i++){
        swap(s[idx],s[i]);
        generateperm(s,ans,idx+1);
        swap(s[idx],s[i]);
    }
}

int main()
{
    string s="abc";
    vector<string>ans;
    generateperm(s,ans,0);
    
    for(auto x:ans){
        cout<<x<<" ";
    }

    return 0;
}
