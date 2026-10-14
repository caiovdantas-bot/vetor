#include <stdio.h>

int main(){
	int i;
	int num [5];
	
	for (i = 0; 1 < 5; i++){
	printf("numero %d: ", i++);
	scanf("%d",&num[i]);
	
	}
	
	for (i = 0; 1 < 5; i++){
		printf("%d\n",num[i]);
		
	}
	
	return 0;
}
