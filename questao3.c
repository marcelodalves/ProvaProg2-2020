#include<stdio.h>
#include<stdlib.h>

int func(int n, int p, int *vet);

int main()
{
	int i, tam, preco;
	int media, *hora;
	
	printf("Entre com o num de funcionarios: ");
	scanf("%d", &tam);
	
	hora = malloc (tam*sizeof(int));
	
	printf("Entre com o preco da hora: ");
	scanf("%d", &preco);
	
	for(i=0;i<tam;i++){
		printf("Entre com a carga horaria: ");
		scanf("%d", &hora[i]);
	}
	
	media=func(tam, preco, hora);
	
	printf("Media do salario: %d", media);
	free(hora);
	return 0;
}

int func(int n, int p, int *vet){
	
	int soma=0, media=0, i, sal;
	
	for(i=0;i<n;i++){
		vet[i]=vet[i]*p;
		
	}
	for(i=0;i<n;i++){
		vet[i]=vet[i]*30;
		soma+=vet[i];	
	}
	media=soma/n;
	
	return media;
}
