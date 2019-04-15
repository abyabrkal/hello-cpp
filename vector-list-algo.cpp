#include <iostream>
#include <vector> 

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

}