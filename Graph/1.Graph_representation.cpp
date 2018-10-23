#include <bits/stdc++.h>

using namespace std;

int main(){

	// adjancency List

	vector<int> adj[5];

	adj[1].push_back(2);
	adj[2].push_back(3);
	adj[2].push_back(4);
	adj[3].push_back(4);
	adj[4].push_back(1);


	for(auto x: adj[2])
		cout << x << ", ";
	cout << endl;

	// weighted graphs

	vector<pair<int, int>> adj1[5];

	adj1[1].push_back({2,5}); // or make_pair(2,5)
	adj1[2].push_back({3,7});
	adj1[2].push_back({4,6});
	adj1[3].push_back({4,5});
	adj1[4].push_back({1,2});

	for(auto x:adj1[2])
		cout << x.first << " :: " << x.second << ", ";
	cout << endl;


	// Adjacency Matrix

	int adj2[4][4] = {{0,5,0,0}, {0,0,7,6}, {0,0,0,5}, {2,0,0,0}};

	// Edge List

	vector<pair<int, int>> edges;

	edges.push_back({1,2}); // node1 -> node2
	edges.push_back({2,3});
	edges.push_back({2,4});
	edges.push_back({3,4});
	edges.push_back({4,1});

	// weighted edges

	vector<tuple<int, int, int>> wedges;

	wedges.push_back({1,2,5}); // OR make_tuple(1,2,5)
	wedges.push_back({2,3,7});
	wedges.push_back({2,4,6});
	wedges.push_back({3,4,5});
	wedges.push_back({4,1,2});

    return 0;
}