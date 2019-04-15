#include <iostream>
#include <vector> 
#include <list>
#include <algorithm>

using namespace std;

int main() {
	// VECTOR - for Continous Memory allocation 
	//vector<int> v;

	// LIST - for Doubly Linked list (Non continuous) - works same as vector
	list<int> v;

	// Add data into vector
	v.push_back(50);
	v.push_back(30);
	v.push_back(10);
	v.push_back(60);

	// Sorting
	// vector takes Random access iterator
	// list takes Bi-Directional iterator
	sort(v.begin(), v.end());

	// iterator
	//vector<int>::iterator itr = v.begin(); C++11 brings 'auto'
	auto itr = v.begin();

	//display using itr.
	for(; itr != v.end(); itr++){
		cout << *itr << " ";
	}
	cout<<endl;

	//display using itr.
	for(; itr != v.end(); itr++){
		cout << *itr << " ";
	}
	cout<<endl;

	// clear all contents
	v.clear();


	// ARRAYS - still works with algorithms.
	int arr[] = { 100, 20, 52 , 45 ,78};
	int *begin = &arr[0];
	int *end = &arr[0] + (sizeof(arr)/sizeof(int));

	sort(begin, end);

	for(; begin != end; begin++){
		cout << *begin << " ";
	}



	return 0;
}