#include <bits/stdc++.h>

using namespace std;

int main(){

	vector<int> v; // inner implementation array

	v.push_back(5);
	v.push_back(3);

	cout << v[0] << endl;

	for(int i=0; i< v.size(); i++)
		cout << v[i] << endl;

	for(auto x: v)
		cout << x << endl;

	vector<int> v1 = {8,9,3,5,1,6,7};

	cout << v1.back() << endl;
	v1.pop_back();
	cout << v1.back() << endl;

	sort(v1.begin(), v1.end());

	for(auto x: v1)
		cout << x << " ";
	cout << endl;


	reverse(v1.begin(), v1.end());

	for(auto x:v1)
		cout << x << " ";
	cout << endl;

	random_shuffle(v1.begin(), v1.end());

	for(auto x: v1)
		cout << x << " ";
	cout << endl;

	vector<int> v2 = {2,3,3,5,7,8,8,8,9};

	auto a = lower_bound(v2.begin(), v2.end(), 2);
	auto b = upper_bound(v2.begin(), v2.end(), 3);

	cout << *a << endl;
	cout << a - v2.begin() << endl; // index
	cout << *b << endl;


    return 0;
}