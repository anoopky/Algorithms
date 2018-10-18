#include <bits/stdc++.h>

using namespace std;


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
	queue<int> q;

	q.push(1);
	visited[1] = 1;

	while(!q.empty()){

		int s = q.front();
		q.pop();
		cout << s << ", ";

		for(auto x: adj[s]){
			if(!visited[x]){
				visited[x] = 1;
				q.push(x);
			}
		}

	}
    return 0;
}