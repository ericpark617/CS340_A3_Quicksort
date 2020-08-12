#include "quicksort.h"
/*
	Function for doing quick sort.
*/

void quickSort(vector<int> &dataVector, int start, int end) {
	if (start < end) {
		// partition the data set
		int newPivotIndex = partition(dataVector, start, end);
		// recursively quicksort the two partitioned data sets.
		quickSort(dataVector, start, newPivotIndex - 1);
		quickSort(dataVector, newPivotIndex, end);
	}
}
