#include <bits/stdc++.h>


using namespace std;

int main(){


	vector<tuple<int, int, int>> edge;

	edge.push_back({1,2,2}); // node1, node2, weight
	edge.push_back({1,4,7});
	edge.push_back({1,3,3});

	edge.push_back({2,1,2});
	edge.push_back({2,4,3});
	edge.push_back({2,5,5});

	edge.push_back({3,1,3});
	edge.push_back({3,4,1});

	edge.push_back({4,1,7});
	edge.push_back({4,2,3});
	edge.push_back({4,3,1});
	edge.push_back({4,5,2});

	edge.push_back({5,2,5});
	edge.push_back({5,4,2});


	int N=6;
	int distance[N];

	for(int i=0; i<N; i++)
		distance[i] = INT_MAX;

	distance[0] = -1; // edges number start from 1 (in this case)
	distance[1] = 0;

	for(int i=0; i<N; i++){
		for(auto x: edge){
			int a,b,w;
			tie(a,b,w) = x;
			distance[b] = min(distance[b], distance[a]+w);
		}
	}

	for(auto x: distance)
		cout << x << " ";
	cout << endl;
    return 0;
}