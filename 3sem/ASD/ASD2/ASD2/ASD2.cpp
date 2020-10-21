#include<iostream>
#include"Sort.h"
#include"Timer.h"

using namespace std;

int main() {
	for (int i = 10; i < 100001; i = 10 * i) {
		for (int j = 0; j < 10; j++) {
			BubbleSortTime(i);
		}
	}
}