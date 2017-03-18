#include <stdio.h>
#include <string.h>
char ex[9] = "lagartija";
int life = 6;
int counter = 0;
char op[1];
void spaces(int* a, int b){
	int clife = 0;
	for(int i = 0;i<b;i++){
		if(ex[i]==op[0]){
			a[i] = 1;
			clife = 1;
			counter ++;
		}
	}
	for(int i = 0; i<b;i++){
		if(a[i]== 1){
			printf("%c ",ex[i]);
		}else{
			printf("_ ");
		}
	}
	printf("\n");
	if(clife == 0){
		life --;
	}
}
void main(){
	int coin[strlen(ex)];
	for(int k = 0;k<strlen(ex);k++){
		coin[k] = 0;	
	}
	while(life>0 && counter < strlen(ex)){
	printf("Tiene %d vidas \n",life);
	printf("Escriba una letra\n");
	scanf("%s", op);
	if(strlen(op)>1){
		printf("No se permite mas de una letra\n");
	}else{
		spaces(coin,strlen(ex));	
	}
	}
	
}
