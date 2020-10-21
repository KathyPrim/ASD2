#include"Sort.h"

int BinarySearsh(int* array, int size, int search) {
	int middle = size / 2,
		left = 0,
		right = size - 1;
	while (left <= right) {
		if (array[middle] < search) {
			left = middle + 1;
			middle = (right - left) / 2;
		}
		if (array[middle] > search) {
			right = middle - 1;
			middle = (right - left) / 2;
		}
		if (array[middle] == search) {
			return middle;
			break;
		}
	}
	if (left > right) return -1;
}

void quickSort(int* array, int left, int right) {
	int i = left;
	int j = right-1;
	int pivot = array[right];
	do {
		while (array[i] < pivot) { // last right element < pivot
			i++;
		}
		//j = i + 1; // from i+1 to right 
		while (array[j] > pivot) { // last left element > pivot
			j--;
		}
		if (i<=j) { // exchange
			int tmp = array[j];
			array[j] = array[i];
			array[i] = tmp;
			for (int k = 0; k < 9; k++) {
				cout << array[k] << " ";
			}
			cout << endl;
		}
		else break;
	} while (i <= j);
	if (i < right) quickSort(array, i, right);
	if (j > left) quickSort(array, left, j);
}

void QuickSort(int* array, int size){
	quickSort(array, 0, size - 1);
}

void BubbleSort(int* array, int size){
	int i, j, t;
	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1])
			{
				t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
		}
	}
}

void BogoSort(int* array, int size){
	const int rand_1 = 1103515245, rand_2 = 12345, rand_3 = 65536, rand_max = size;
	int next = 1, count = 0;
	for (int i = 1; i < size; i++) {
		if (array[i] > array[i - 1]) {
			count++;
		}
	}
	bool right = (count == size - 1);
	while (!right){
		// mix
		for (int i = 0; i < size; i++) {
			// random index
			next = ((next * rand_1 + rand_2) / rand_3) % rand_max;
			// swap [i] and [next]
			int tmp = array[i];
			array[i] = array[next];
			array[next] = tmp;
		}
		for (int i = 1; i < size; i++) {
			if (array[i] > array[i - 1]) count++;
		}
		right = (count == size-1);
	}	
}

void CountingSort(char* array, int size){
	char max = array[0];
	for (int i = 0; i < size; i++) {
		if (array[i] > max) max = array[i];
	}
	unsigned* count = new unsigned[max+1];
	count = { 0 };
	for (int i = 0; i < size; i++) {
		count[array[i]] ++;
	}
	int counter = 0;
	for (int i = 0; i < max+1; i++){
		for (unsigned j = 0; j < count[i]; j++) {
			array[counter] = i;
			counter++;
		}
	}
}