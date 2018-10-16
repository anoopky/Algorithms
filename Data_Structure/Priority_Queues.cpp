#include <bits/stdc++.h>

using namespace std;

int main(){

	priority_queue<int> q; // innner implementation heap (default max heap)

	q.push(3);
	q.push(5);
	q.push(7);
	q.push(2);

	cout << q.top() << endl;
	q.pop();

	cout << q.top() << endl;

	priority_queue<int, vector<int>, greater<int>> q1; // min heap

	q1.push(10);
	q1.push(6);
	q1.push(11);
	q1.push(13);

	cout << "MIN :: "<< q1.top() << endl; 


	return 0;
}