#include <bits/stdc++.h>

using namespace std;

int main(){

	map<string, int> m;  // inner implementation BST

	m["a"] = 5;
	m["b"] = 1;
	m["c"] = 10;

	cout << m["b"] << endl;

	cout << m["z"] << endl; // if doesn't exist then default value

	if(m.count("x"))
		cout << "exist" << endl;

	else
		cout << "Not exist" << endl;


	for(auto x: m)
		cout << x.first << " -> " << x.second << endl;

	return 0;
}