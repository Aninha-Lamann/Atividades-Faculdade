#include <stdio.h>

int main()
{
	int A[5];
	int temp;

	printf("Digite 5 numeros:\n");
	for(int i = 0; i < 5; i++) {
		scanf("%d", &A[i]);
	}
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4 - i; j++) {
			if(A[j] > A[j+1]) {
				temp = A[j+1];
				A[j+1] = A[j];
				A[j] = temp;
			}
		}
	}
	printf("Numeros ordenados: ");
	for(int i = 0; i < 5; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");

	return 0;
}