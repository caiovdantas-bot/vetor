#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int num[8];
	int i;
	int maior, menor;
	
	for (i = 0; i < 8; i++){
		printf("Digite o %d numero: ", i + 1);
		scanf("%d", &num[i]);
		
	}
	
	maior = num[0];
	menor = num[0];
	
	for (i = 0; i < 8; i++){
		if (num[i] > maior){
			maior = num [1];
			
	if (num[i] < menor){
		menor = num[i];
	}
		}
	}
	
	printf("\nNumeros digitados\n");
	
	for (i = 0; i < 8; i++){
		printf("Posição %d: %d\n", i, num[i]);
	}
	
	printf("\nResultado\n");
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
	system ("cls");
	return 0;
}
