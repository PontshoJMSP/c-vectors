#include <iostream>
#include <vector>
#include <string>
using namespace std;

void details() {
	vector<string> name = { "Athi","luyanda","sihle" };
	vector< string> surname = { "ndaba","lucino","Vece" };
	vector<int> age = { 22,19,55 };
	
	for (int i = 0; i < name.size(); i++) {
		cout << name.capacity() << endl;

	};
	cout << name.size() << endl;
	cout << name.capacity() << endl;


}

	
int main()
{
	details();
	 
}
	


























