#include <iostream>

void Selection_sort(int* list, int size) {
	
	int now = 0;
	int smaller = 0;
	int pos = 0;

	for (int i = 0; i < size - 1; i++) {
		
		smaller = now = list[i];

		for (int j = (i + 1); j < size; j++) {
			if (list[j] < smaller) {
				smaller = list[j];
				pos = j;
			}
		}
		if (smaller != now) {
			list[i] = smaller;
			list[pos] = now;
		}
		
	}

}

int main() {

	int a[] = { 1, 6, 9, 8, 5, 4, 7, 12 };

	for (int i = 0; i < 8; i++) {
		std::cout << a[i] << ", ";
	}
	std::cout << "\n";
	Selection_sort(a, 8);
	
	for (int i = 0; i < 8; i++) {
		std::cout << a[i] << ", ";
	}
	return 0;
}