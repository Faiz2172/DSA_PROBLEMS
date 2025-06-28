
// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string moveHash(string &str,int n)
{
    string str1,str2;
    for(int i=0;i<n;i++){
        if(str[i]=='#'){
            str1+=str[i];
        }
        else {
            str2+=str[i];
        }
    }
        str1=str1+str2;
        return str1;
}
int main()
{
    string c;
    cin>>c;
    int len;
    len = c.size();
    cout<<moveHash(c, len);
    return 0;
}
