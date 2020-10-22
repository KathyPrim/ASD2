#include<iostream>
#include"Sort.h"
#include"Timer.h"

using namespace std;

int main() {
	char b[] = "algorithm";
	CountingSort(b, 9);
	for (int i = 0; i < 9; i++) {
		cout << b[i];
	}
}