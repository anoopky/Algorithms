#include <bits/stdc++.h>

using namespace std;

int main(){

	int N=6;
	vector<pair<int, int>> adj[N];

	adj[1].push_back({2,2}); // node , weight
	adj[1].push_back({4,7});
	adj[1].push_back({3,3});

	adj[2].push_back({1,2});
	adj[2].push_back({4,3});
	adj[2].push_back({5,5});

	adj[3].push_back({1,3});
	adj[3].push_back({4,1});

	adj[4].push_back({1,7});
	adj[4].push_back({2,3});
	adj[4].push_back({3,1});
	adj[4].push_back({5,2});

	adj[5].push_back({2,5});
	adj[5].push_back({4,2});

	priority_queue<pair<int, int>> q; // use negative weights or create a min priority queue

	int distance[N];
	bool visited[N]={0};

	for(int i=0; i<N; i++)
		distance[i] = INT_MAX;

	distance[0] = -1;
	distance[1] = 0;

	q.push({0, 1}); // distance, node_id

	while(!q.empty()){

		int a = q.top().second;
		q.pop();
		if(visited[a])
			continue;

		visited[a] = 1;

		for(auto x: adj[a]){
			int b = x.first;
			int w = x.second;
			if(distance[a]+w < distance[b]){ // distance[b] = min(distance[b], distance[a]+w);
				distance[b] = distance[a]+w;
				q.push({-distance[b], b});
			}
			
		}
	}

	for(auto x: distance)
		cout << x<< " ";
	cout << endl;

    return 0;
}