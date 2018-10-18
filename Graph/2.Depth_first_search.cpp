#include <bits/stdc++.h>

using namespace std;


void dfs(int i, vector<int> adj[], bool visited[]){

	if(visited[i] == 1)
		return;

	visited[i] = 1;
	cout << i << ", ";
	for(auto x : adj[i]){
		dfs(x, adj, visited);
	}

}


int main(){

	vector<int> adj[6];

	adj[1].push_back(2);
	adj[1].push_back(4);
	adj[2].push_back(1);
	adj[2].push_back(5);
	adj[2].push_back(3);
	adj[3].push_back(2);
	adj[3].push_back(5);
	adj[5].push_back(3);
	adj[5].push_back(2);

	bool visited[6] = {0};

	for(int i=1; i<6; i++){
		if(visited[i] == 0)
			dfs(i , adj, visited);
	}
    return 0;
}