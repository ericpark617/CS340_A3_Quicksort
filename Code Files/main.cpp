#include "quicksort.h"
/*
	Program sorts a set of user inputted integers using quick sort. 
*/

int main() {
	vector<int> dataVector;
	int input;

	cout << "Enter values separated by a space. End input with '-1.' \n";
	while (cin >> input && input != -1) {
		dataVector.push_back(input);
	}

	quickSort(dataVector, 0, dataVector.size() - 1);

	for (vector<int>::iterator it = dataVector.begin(); it != dataVector.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}
