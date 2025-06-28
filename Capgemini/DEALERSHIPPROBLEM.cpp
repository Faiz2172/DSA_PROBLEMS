//DEALERSHIP PROBLEM

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;//total no. of dealership
    cin>>n;
    
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        int total=0;
        for(int j=0;j<2;j++){
            if(j==0){
                total += arr[i][j] *4;
            }
            else {
                total += arr[i][j] *2;
            }
            
        }
        cout<<total<<"\n";
    }
    return 0;
}
