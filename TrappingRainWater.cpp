#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int trapping(vector<int>& arr,int n){
    int ans=0;
    vector<int>leftmax(n,-1);
    vector<int>rightmax(n,-1);
    leftmax[0]=arr[0];
    rightmax[n-1]=arr[n-1];
    for(int i=1;i<n;++i){
        leftmax[i]=max(leftmax[i-1],arr[i]);
    }
    
    for(int i=n-2;i>=0;--i){
        rightmax[i]=max(rightmax[i+1],arr[i]);
    }
    
    for(int i=0;i<n;++i){
        ans=ans+(min(leftmax[i],rightmax[i])-arr[i]);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    if(n<3) {
        cout<<0;
        return 0;
    } 
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=trapping(arr,n);
    cout<<maxi;

    return 0;
}
