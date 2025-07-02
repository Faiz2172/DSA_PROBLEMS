#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr1={1,2,-3,-1,-2,4};
    int n=arr1.size();
    vector<int>neg;
    vector<int>pos;
    
    for(int i=0;i<n;i++){
        if(arr1[i]>0){
            pos.push_back(arr1[i]);
        }
        else {
            neg.push_back(arr1[i]);
        }
    }
    
    int j=0;
    for(int i=0;i<n;i+=2){
        arr1[i]=pos[j];
        j++;
    }
    j=0;
    for(int i=1;i<n;i+=2){
        arr1[i]=neg[j];
        j++;
    }
    
    
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    
    return 0;
}
