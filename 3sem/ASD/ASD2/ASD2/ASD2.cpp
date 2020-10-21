#include<iostream>
#include"Sort.h"
#include"Timer.h"

using namespace std;

void QS(int* array, int left, int right)
{
	int x = array[(right + left) / 2]; //choose the middle element as a pivot
	int swapbuf;
	int i = left, j = right;
	do
	{
		while (array[i] < x)//looking for an element smaller than the pivot
			i++;
		while (array[j] > x)//looking for an element bigger than the pivot
			j--;
		if (i <= j) // swap
		{
			swapbuf = array[i];
			array[i] = array[j];
			array[j] = swapbuf;
			i++;
			j--;
		}
	} while (i < j);
	if (i < right) //if they did not go beyond the bounds of the array
		QS(array, i, right);
	if (j > left)
		QS(array, left, j);
}


int main() {
	int b[] = { 1, 9, 2, 8, 3, 7, 4, 6, 5 };
	QuickSort(b, 9);
	for (int i = 0; i < 9; i++) {
		cout << b[i] << endl;
	}

	/*for (int i = 10; i < 100001; i = 10 * i) {
		for (int j = 0; j < 10; j++) {
			BubbleSortTime(i);
		}
	}*/
}