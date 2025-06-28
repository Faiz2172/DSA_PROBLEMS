//Problem Statement –

//Capgemini in its online written test have a coding question, wherein the students 
//are given a string with multiple characters that are repeated consecutively.
//You’re supposed to reduce the size of this string using mathematical logic given as in the example below .

// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string Countletters(string &st,int n){
    map<char,int>mpp;
    for(int i=0;i<n;i++){
        mpp[st[i]]++;
    }
    string result="";
    for(auto &it:mpp){
        if(it.second>1){
            result+=it.first+to_string(it.second);
        }
        else {
            result+=it.first;
        }
    }
    return result;
}

int main(){
    string str;
    cin>>str;
    int len=str.size();
    cout<<Countletters(str,len);
    return 0;
}
