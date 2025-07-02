

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>arr={1,2,3,4,5,6,7};
    int n=arr.size();
    int d=4;
    d=d%n;
    
    for(int i=0;i<n-d;i++){
        vec.push_back(arr[i]);
    }
    int j=0;
    for(int i=n-d;i<n;i++){
        arr[j]=arr[i];
        j++;
    }
    j=0;
    for(int i=d;i<n;i++){
        arr[i]=vec[j];
        j++;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
