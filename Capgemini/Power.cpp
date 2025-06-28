// Write a function to solve the following equation a3 + a2b + 2a2b + 2ab2 + ab2 + b3.


// Write a program to accept three values in order of
// a, b and c and get the result of the above equation.


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    
    int ans=0;
    ans= pow(a+b,3);
    cout<<ans;
}
