

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>arr={1,2,3,4,5,6,7};
    int n=arr.size();
    int d=9;
    d=d%n;
    
    for(int i=0;i<d;i++){
        vec.push_back(arr[i]);
    }
    
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    
    int j=0;
    for(int i=n-d;i<n;i++){
        arr[i]=vec[j];
        j++;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
