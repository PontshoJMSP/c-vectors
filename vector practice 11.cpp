#include <iostream>
#include <vector>
using namespace std;

//vector<int>& vector_functions(vector<int> nums) {
	 
	 
		


int main() {
	int size = 5;

	vector<int> marks(5);
	
	for (int i = 0; i < size; i++) {
		int mark;
		cout << "enter mark:";
		cin >> mark;
		marks[i] = mark;
	}
	//marks.clear();
	
	if (marks.empty()) {
		cout << "it is empty";
	}
	else {
		for (int i = 0; i < size; i++) {
			cout << marks[i] << endl;
		}
	}

	int new_size;
	cout << "enter how many numbers u wanna add:";
	cin >> new_size;

	for (int i = 0; i < new_size; i++) {
		int new_val;
		cin >> new_val;
		marks.push_back(new_val);
	}

	for (int i = 0; i < (size+new_size); i++) {
		cout << marks[i] << endl;    
	}
	
}