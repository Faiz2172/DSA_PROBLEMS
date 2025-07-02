

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>intersection;
    vector<int>arr1={1,1,2,3,4,5};
    vector<int>arr2={1,1,3,4,5,5,6};
    int n1=arr1.size(),n2=arr2.size();
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else {
            intersection.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    
    for(int i=0;i<intersection.size();i++){
        cout<<intersection[i]<<" ";
    }
    
    return 0;
}
