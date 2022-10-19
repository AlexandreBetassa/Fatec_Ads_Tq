#include <stdio.h>

int main() {

    int vetor[100], n, i=0, produto = 1, k=0, multiplo2e3[100], segunMenor, primMenor, somaPar=0, somaImpar=0, produtoSomaParImpar=0;
    float maior = 0, soma = 0, media =0;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++) {

        printf("Qual o %d valor?",i+1);
        scanf("%d",&vetor[i]);
        //a
        if(vetor[i] % 2 == 0){
            produto = produto * vetor[i];
            somaPar = somaPar + vetor[i];
        } else {
            somaImpar = somaImpar + vetor[i];
            if(i == 0) maior = vetor[i];
            else if(maior < vetor[i]) maior = vetor[i];
        }

        //c
        if(vetor[i] % 2 == 0 && vetor[i] % 3 == 0){
          soma = soma + vetor[i];
          k++;
        }

        //d
        if (vetor[i] < primMenor) {
            segunMenor = primMenor;
            primMenor = vetor[i];
      } else if (vetor[i] < segunMenor && vetor[i] != primMenor) {
            segunMenor = vetor[i];
      }
    }

    //a
    if(produto == 1) {
        printf("\nNao foram inseridos elementos pares no vetor!");
    } else {
        printf("\nO produto dos elementos pares e: %d", produto);
    }

    //b
    if(maior == 0) {
        printf("\nNao foram inseridos elementos impares no vetor!");
    } else {
        printf("\nO maior elemento impar do vetor e: %f", maior);
    }

    //c
    media = soma / k;
    if(soma == 0){
        printf("\nNao existem multiplos de 3 e 5 inseridos!");
    } else {
        printf("\nA media dos multiplos de 2 e 3 e: %f",media);
    }

    //d
    printf("\nO segundo menor valor inserido e: %d",segunMenor);

    //e
    produtoSomaParImpar = somaImpar * somaPar;

    printf("\nA soma dos elementos pares e: %d",somaPar);
    printf("\nA soma dos elementos impares e: %d",somaImpar);
    printf("\n O produto da soma dos elementos pares e dos elementos impares e: %d",produtoSomaParImpar);

    return 0;
}
