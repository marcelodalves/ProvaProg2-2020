#include<stdio.h>
#include<stdlib.h>
#include<string.h>
     typedef struct
    {
        char sigla[2];
        char marca[20];
        int num_pessoas;
        int ano;
    } concessionaria;
    
int main(){
    concessionaria c;
    int i=0, soma=0, cont_sigla=0, cont_fabr=0;
    float media=0;

    do{
        printf("Entre com a quantidade de pessoas no carro (0 termina o programa): ");
        scanf("%d", &c.num_pessoas);
        soma+=c.num_pessoas;
        if(c.num_pessoas==0)
        {
            break;
        }
        
        printf("Entre com a sigla do Estado: ");
        scanf("%s", c.sigla);
        
        if(strcmp(c.sigla,"MG")==0 || strcmp(c.sigla,"mg")==0)
        {
            cont_sigla++;
        }
        printf("Entre com o ano de fabricacao do carro: ");
        scanf("%d", &c.ano);
        if(c.ano < 2000)
        {
            cont_fabr++;
        }
        printf("Entre com a marca do carro: ");
        scanf("%s", c.marca);
        printf("\n");
    i++;
    }while(c.num_pessoas != 0);
    media=soma/i;
    
    printf("\nMedia de pessoas por automovel: %.2f \n", media);
    printf("\nNumero de veiculos de Minas Gerais: %d", cont_sigla);
    printf("\nNumero de veiculos fabricados antes de 2000: %d\n", cont_fabr);
    return 0;
}
