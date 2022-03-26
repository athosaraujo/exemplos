#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int lin;
void baseMat(char* matriz){			//Declara os valores de dentro do array matriz
	for(int i=0;i<lin;i++){
		for(int j=0;j<lin;j++){
			matriz[i*lin+j]='-';
		}
	} matriz[(lin-1)*lin + (((lin+1)/2)-1)] = 'U';
}

void printMat(char* matriz){		//Vai printar oq tem dentro do array
	for(int i=0;i<lin;i++){
		for(int j=0;j<lin;j++){
			printf("%c", matriz[i*lin+j]);
			} printf("\n");}}
			
void seed1(char* matriz, int inter){		// Adiciona caractéres dentro do array (as linhas da arvore)
    int k;

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < lin; j++){
            if(matriz[i*lin + j] == 'U'){
                for(k = 0; k < pow(2,inter-1) ; k++){
                    matriz[(i-k)*lin + j] = '1';}
                matriz[(i-k)*lin + j] = 'Y';
            }}}}

void seed2(char* matriz, int inter){ // repete o seed1 com a outra metade
    int k;
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < lin; j++){
            if(matriz[i*lin + j] == 'Y'){
                for(k = 0; k < pow(2,inter-1) ; k++){
                    matriz[(i-k)*lin + j-k] = '1';
                    matriz[(i-k)*lin + j+k] = '1';}
                matriz[(i-k)*lin + j-k] = 'U';
                matriz[(i-k)*lin + j+k] = 'U';
            }}}}

void adNauseum(char* matriz, int inter){ 		//repete o codigo, criando um fractal de mentirinha
	
	do{
		seed1(matriz,inter);
		seed2(matriz,inter);
		--inter;
	}while(inter>0);
}

int main(){				// Executa as funções
	int inter;
	printf("Escolha o numero de interacoes: ");
	scanf("%d", &inter);
	
	lin = pow(2, inter+1)+1;
	
	char* matriz[lin*lin];
	
	baseMat(matriz);
	adNauseum(matriz,inter);
	printMat(matriz);
	 
	 
	system("PAUSE"); // Deixa a pessoa pressionar enter para encerrar o código
	return 0;
}
