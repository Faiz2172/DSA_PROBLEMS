// ALSO KNOWN AS KAHN'S ALGORITHM


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>topoSort(int V,vector<int> adj[]){
    vector<int>inDegree(V);
    vector<int>topo;
    queue<int>q;
    
    for(int i=0;i<V;i++){
        for(auto it:adj[i]){
            inDegree[it]++;
        }
    }
    
    for(int i=0;i<V;i++){
        if(inDegree[i]==0) {
            q.push(i);
        }
    }
    
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it:adj[node]){
            inDegree[it]--;
            if(inDegree[it] ==0 ) q.push(it);
        }
        topo.push_back(node);
    }
    return topo;
    
}

int main()
{
    vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
	int V = 6;
	vector<int>ans = topoSort(V,adj);
	
	for(auto it:ans){
	    cout<<it<<" ";
	}

    return 0;
}
