#include <iostream>
#include <set> 
#include <algorithm>

using namespace std;

// Custom comparator
template <typename type>
struct mycomp {
	bool operator()(const type &first, const type &second) const {
		return first < second;
	}
};



int main() {
	// SET - unque values even if yiu enter same value twice
	// MULTISET accepts all duplicates too. 
	set<int> myset;

	myset.insert(40);
	myset.insert(90);
	myset.insert(70);
	myset.insert(40); // will be discarded
	myset.insert(60);

	// dijsplay will be sorted
	for(auto &elem: myset){
		cout<< elem<< " ";
	}

	set<int, less<int> > myset1; //displays set values in ascending order
	set<int, greater<int> > myset2; //displays set values in descending order

	set <int, mycomp<int>> myset3; // using custom comparator
	return 0;
}	