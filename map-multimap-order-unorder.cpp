#include <iostream>
#include <map> 
#include <algorithm>

using namespace std;

int main() {
	/* Maps are generally used at places where we need to extract data faster from the containers. Maps store data as key-value pair and stored it in sorted order using the tree data structure (Red-Black Trees most of the cases).
	Maps returns a Pair.

	An unordered map is just a hash implementation which allows faster insertion and retrieval of the data
	*/


	pair<int, int> p = make_pair(10,20);
	cout<<p.first << "-" <<p.second <<endl;

	// MAPS - unique keys
	map<int, int> mp;
	unordered_map<int, int> ump;

	mp[1] = 400;
	mp[3] = 100;
	mp.insert(make_pair(2, 200));

	ump.insert(make_pair(1, 2000));

	for(auto it = mp.begin(); it != mp.end(); it++){
		cout << it->first <<"-"<< it->second<<endl;
	}


	// MULTIMAPS - multiple values allowed for same key
	multimap<int, int> mmp;
	unordered_multimap<int, int> ummp;

	mmp.insert(make_pair(2, 200));
	mmp.insert(make_pair(1, 500));
	mmp.insert(make_pair(5, 500));
	mmp.insert(make_pair(4, 100));
	mmp.insert(make_pair(4, 700));
	mmp.insert(make_pair(4, 800));

	ummp.insert(make_pair(1, 700));
	ummp.insert(make_pair(1, 800));

	for(auto it = mmp.begin(); it != mmp.end(); it++){
		cout << it->first <<"-"<< it->second<<endl;
	}

	return 0;
}