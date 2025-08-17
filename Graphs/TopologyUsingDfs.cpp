
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int> adj[],vector<bool>& visited,stack<int>& st){
    visited[node] =true;
    for(auto it : adj[node]){
        if(!visited[it]){
            dfs(it,adj,visited,st);
        }
    }
    st.push(node);
}

vector<int>topoSort(int V,vector<int> adj[]){
    vector<int>topo;
    vector<bool>visited(V,false);
    stack<int>st;
    
    for(int i=0;i<V;i++){
        if(!visited[i]){
            dfs(i,adj,visited,st);
        }
    }
    
    while(!st.empty()){
        topo.push_back(st.top());
        st.pop();
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
