#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector<int> &dataVector, int start, int end);
void findPivot(vector<int> dataVector, int start, int end, int &pivotValue, int &pivotIndex);
int partition(vector<int> & dataVector, int start, int end);

#endif
