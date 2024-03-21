#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int numeros[5];
	int i, j, z;
	printf("Digite cinco números\n");
	for (i=0; i<5; i++) {
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &numeros[i]);
	}
	
	for (j=0; j<5; j++) {
		numeros[j] += numeros[j] * 3;
	}
	
	for (z=0; z<5; z++) {
		printf("%d\n", numeros[z]);
	}
		
	return 0;
}
