#include <stdio.h>

int main(){
	int num[5] = {18,42,7,31,25};
	int maior = num[0]; 
	int menor = num[0];
	
	for(int i = 1; i < 5; i++){
		if (num[i] > maior) maior = num[i];
		if (num[i] < menor) menor = num[i];
	}
	
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
	
	return 0;
}
