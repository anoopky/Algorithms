#include <bits/stdc++.h>

using namespace std;

int main(){

	set<int> s; // inner implementation BST (all elemets are sorted)

	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(5);
	s.insert(9);


	cout << s.count(4) << endl; // 0 or 1
	cout << s.count(6) << endl; // 0 or 1

	s.erase(3);
	cout << s.count(3) << endl;

	s.insert(3);
	s.insert(3);
	s.insert(3);

	cout << s.count(3) << endl;

	cout << s.size() << endl;

	for(auto x: s)
		cout << x << " ";
	cout << endl;

	// find

	auto it = s.find(10);

	if(it == s.end())
		cout << "Not Found \n";

	// finding smallest and largest element

	cout << *s.begin() << endl;
	cout << *(--s.end()) << endl;


	multiset<int> s1; // set and unordered set

	s1.insert(9);
	s1.insert(2);
	s1.insert(2);
	s1.insert(2);
	s1.insert(3);
	s1.insert(3);
	s1.insert(3);
	s1.insert(3);

	for(auto x: s1)
		cout << x << " ";
	cout << endl;

	s1.erase(2);

	for(auto x: s1)
		cout << x << " ";
	cout << endl;

	s1.erase(s1.find(3));

	for(auto x: s1)
		cout << x << " ";
	cout << endl;

    return 0;
}