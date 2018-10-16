#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

int main(){

	indexed_set s;

	s.insert(9);
	s.insert(2);
	s.insert(9);
	s.insert(3);
	s.insert(7);
	s.insert(5);

	for(auto x: s)
		cout << x << " ";
	cout << endl;

	//  access to the index of element would have in sorted array
	cout << *s.find_by_order(2) << endl;

	//  access to the element index would have in sorted array

	cout <<  s.order_of_key(7) << endl;
	
	cout <<  s.order_of_key(6) << endl; // also give elements index would have in sorted array that are not present 

	for(auto x: s)
		cout << x << " ";
	cout << endl;

	return 0;
}