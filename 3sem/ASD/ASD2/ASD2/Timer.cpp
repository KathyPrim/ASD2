#include"Timer.h"
#include <iostream>
#include"Sort.h"
#include <time.h>
#include <cstdlib>
using namespace std;
const int rand_1 = 1103515245, rand_2 = 12345, rand_3 = 65536, rand_max = 1001;

void QuickSortTime(int size) {
	int* Array = new int[size];
	int next = (int)clock();
	for (int i = 0; i < size; i++) {
		next = ((next * rand_1 + rand_2) / rand_3) % rand_max;
		Array[i] = next;
	}
	clock_t beg = clock(); // time in ms
	QuickSort(Array, size);
	clock_t end = clock(); // time in ms
	cout << end - beg << endl;
}
void BubbleSortTime(int size) {
	int* Array = new int[size];
	int next = (int)clock();
	for (int i = 0; i < size; i++) {
		next = ((next * rand_1 + rand_2) / rand_3) % rand_max;
		Array[i] = next;
	}
	clock_t beg = clock(); // time in ms
	BubbleSort(Array, size);
	clock_t end = clock(); // time in ms
	cout << end - beg << endl;
}