#include <iostream>
#include <vector>

void InsertionSort(std::vector<int>& vetor) {
	
	int now = 0;
	int indice = 0;
	for (int i = 0; i < vetor.size(); i++) {
		if (i == 0)continue;
		now = vetor.at(i);
		indice = i - 1;
		
		while (now < vetor[indice]) {
			vetor[indice+1] = vetor[indice];
			vetor[indice] = now;
			indice--;
			if (indice < 0)break;
		}

	}
}

int main() {
	std::vector<int> vetor = {8, 6, 1, 7, 10, 0, 5, 99, 2, 18, 26, 17, 16, 33, 31};
	InsertionSort(vetor);
	
	for (int i = 0; i < vetor.size(); i++) {
		std::cout << vetor[i] << " ";
	}
	return 0;
}