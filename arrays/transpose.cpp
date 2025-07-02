#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m=3;
    int n=3;
    int arr[m][n];
    int temp[m][n];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[i][j]=arr[i][j];
        }
    }
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[j][i]=temp[i][j];
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout<<arr[i][j] <<" ";
    }
    cout<<endl;
    }

    return 0;
}
