#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
    int cont = 1;
    int x, r;
    
    do {
        printf("Digite o %d numero: ", cont);
        scanf("%d", &x);
        r = x * 3;
        printf("Resultado: %d\n", r);
        cont++; 
    } while (cont <= 5); 
	
	return 0;
}
