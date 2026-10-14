#include <stdio.h>

int main(){
	float notas[5], soma = 0, media;
	int i;
	
	for(i = 0; i < 5; i++){
		scanf("Nota %d", i+1);
		scanf("%f",&notas [i];
		soma += notas[i];
	}
	
	media = soma/5;
	printf("Soma: %.2f\n", soma);
	printf("Media: %.2f\n", media);
	
	return 0;
}
