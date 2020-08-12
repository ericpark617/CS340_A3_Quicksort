#include "quicksort.h"
/*
	Function for finding the new pivot point and the value of the pivot.
*/

void findPivot(vector<int> dataVector, int start, int end, int &pivotValue, int &pivotIndex) {
	// select value at beginning, end, and middle of array
	int a = dataVector[start];
	int b = dataVector[end / 2];
	int c = dataVector[end];

	// find the median of the three values.
	if ((a < b && b < c) || (c < b && b < a)) {
		pivotValue = b;
		pivotIndex = end / 2;
	}
	else if ((a < c && c < b) || (b < c && c < a)) {
		pivotValue = c;
		pivotIndex = end;
	}
	else {
		pivotValue = a;
		pivotIndex = start;
	}
}