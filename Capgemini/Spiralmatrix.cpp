
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;//rows
	cin>>n;
	int m;//cols
	cin>>m;
	int arr[n][m];
	for (int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>arr[i][j];
		}
	}

	int left=0;
	int right=m-1;
	int top=0;
	int bottom=n-1;

	while(left<=right && top<=bottom) {
		//left to right
		for(int i=left; i<=right; i++) {
			cout<<arr[top][i]<<" ";
		}
		top++;

		//top to bottom
		for(int i=top; i<=bottom; i++) {
			cout<<arr[i][right]<<" ";
		}
		right--;

		//right to left
		if(top<=bottom) {
			for(int i=right; i>=left; i--) {
				cout<<arr[bottom][i]<<" ";
			}
			bottom--;
		}

		//bottom to top
		if(left<=right) {
			for(int i=bottom; i>=top; i--) {
				cout<<arr[i][left]<<" ";
			}
			left++;
		}

	}


	return 0;
}
