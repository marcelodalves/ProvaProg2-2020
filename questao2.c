#include<stdio.h>
#include<stdlib.h>

int notas(int media, float *vetor, float *bigger);

int main()
{
    int i, med, soma=0, result;
    float vet[5], maior;

    for(i=0;i<5;i++){
        printf("Digite as notas: ");
        scanf("%f", &vet[i]);

        soma+=vet[i];
    }
    med=soma/5;

    result=notas(med, vet, &maior);
    
    printf("Media: %d\n", med);
    printf("Numero de notas acima da media: %d\n", result);
	printf("Maior nota: %f\n", maior);
    return 0;
}

int notas(int media, float *vetor, float *bigger){

    int i, cont=0;
    float maior=0;

    for(i=0;i<5;i++){
        if(vetor[i]>=media){
            cont++;
        }
        
         if(vetor[i]>maior){
            maior=vetor[i];
                *bigger=maior;
        }
    }

    return cont;
}
