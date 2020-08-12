#include "quicksort.h"
/*
	Function for partitioning the data set.
*/

int partition(vector<int> &dataVector, int start, int end) {
	int pivotIndex = 0;
	int pivotValue = 0;

	// determine the pivot
	findPivot(dataVector, start, end, pivotValue, pivotIndex);

	int temp;
	int i = start;
	int j = end;
	// start moving the pointers towards each other until they cross.
	while (i <= j) {
		// i is incremented until the value pointing to the location on i is larger than the pivot value.
		while (dataVector[i] < pivotValue) {
			i++;
		}
		// j is decremented until the value pointing to the location on j is smaller than the pivot value
		while (dataVector[j] > pivotValue) {
			j--;
		}
		// when i and j cross, swap the value at i with value at j.
		if (i <= j) {
			temp = dataVector[i];
			dataVector[i] = dataVector[j];
			dataVector[j] = temp;
			i++;
			j--;
		}
	}

	// return the new boundary for partitioned data set.
	return i;
}
