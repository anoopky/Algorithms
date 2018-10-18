#include <bits/stdc++.h>

#define INF 1000 // some larger vlaue
using namespace std;

int main(){

	int n =5;

	int dist[n][n] = {{0,5,INF,9,1}, {5,0,2,INF,INF}, {INF,2,0,7,INF}, {9,INF,7,0,2}, {1,INF,INF,2,0}};


	for(int k=0; k<n; k++){
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
			}
		}
	}


	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << dist[i][j] << " ";
		}
		cout << endl;
	}

    return 0;
}