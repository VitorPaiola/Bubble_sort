#include <iostream>
#include <stdlib.h>
#include <string>
#include <locale.h>
#define TAM 10

using namespace std;

static void imprime_vetor(int vetor[]) {
	cout << "\n";
	for (int i = 0; i < TAM; i++) {
		cout << " |" << vetor[i] << "| ";
	}
}

static void bubble_sort(int vetor[TAM]) {
	// Auxiliares
	int x, y, aux;

	// Valor da esquerda sendo analisado
	for (x = 0; x < TAM; x++) {

		imprime_vetor(vetor);

		// Valor da direita sendo analisado
		for (y = x + 1; y < TAM; y++) {

			// Confere se precisa fazer a troca
			if (vetor[x] > vetor[y]) {
				aux = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
		}
	}
}

int main() {
	setlocale(LC_ALL, "");

	int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	bubble_sort(vetor);

	imprime_vetor(vetor);

	return 0;
}