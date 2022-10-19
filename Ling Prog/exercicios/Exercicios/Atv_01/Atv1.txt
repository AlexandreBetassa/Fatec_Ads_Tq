#include <iostream>
#include<stdio.h>
#include<math.h>

float CalcMedia(int qtdLinha, int qtdColuna, int mat[100][100]);

int main()
{
    //EXERCICIO 1 - TAREFA 2
    int matriz[100][100], qtdLinha, qtdColuna, qtdElementos, menorPar = 2, somaInterna = 0;
    float qtdZ=0, qtdP = 0,qtdN = 0, media=0,qtdDivSete = 0;
    printf("Informe a quantidade de linhas: ");
    scanf("%d", &qtdLinha);
    printf("Informe a quantidade de colunas: ");
    scanf("%d", &qtdColuna);
    qtdElementos = qtdColuna*qtdLinha;

    for(int i = 0; i < qtdLinha; i++)
    {
        for(int x = 0; x < qtdColuna; x++)
        {
            printf("Informe o valor da posicao linha [%d] coluna [%d] da matriz: ", i,x);
            scanf("%d", &matriz[i][x]);
        }
    }

    //menor elemento par
    for(int i = 0; i < qtdLinha; i++)
    {
        for(int x = 0; x < qtdColuna; x++)
        {
            if(matriz[i][x] % 2 == 0 && matriz[i][x] != 0 && matriz[i][x] < menorPar) menorPar = matriz[i][x];

            if(matriz[i][x] > 0) qtdP += 1;
            else if(matriz[i][x] < 0) qtdN += 1;
            else qtdZ += 1;

            if((matriz[i][x]%7==0) && x==0 && i==0)
            {
                media=matriz[i][x];
                qtdDivSete += 1;
            }
            else if(matriz[i][x]%7==0)
            {
                media *= matriz[i][x];
                qtdDivSete += 1;
            }
        }
    }
    printf("\nMATRIZ IMPRESSA\n");
    for(int i = 0; i < qtdLinha; i++)
    {
        for(int x = 0; x < qtdColuna; x++)
        {
            printf(" %d |", matriz[i][x]);
        }
        printf("\n\n");
    }

    for (int i = 1; i < (qtdLinha-1); i++)
    {
        for(int x = 1; x < (qtdColuna-1); x++)
        {
            somaInterna += matriz[i][x];
        }
    }


    printf("Quantidade de elementos na matriz: %d\n", qtdElementos);
    printf("Menor numero para da matriz: %d\n", menorPar);
    printf("Porcentagem de numeros positivos: %.2f%%\n", (qtdP/qtdElementos)*100);
    printf("Porcentagem de numeros negativos: %.2f%%\n", (qtdN/qtdElementos)*100);
    printf("Quantidade de numeros iguais a zero: %.2f%%\n", (qtdZ/qtdElementos)*100);
    printf("Media geometrica de numeros multiplos de 7 da matriz: %.2f\n", pow(media,(1/qtdDivSete)));
    printf("Soma elementos internos: %d\n", somaInterna);
    for(int i =0; i < qtdLinha; i++) printf("Media ponderada da primeira linha: %.2f\n", CalcMedia(i, qtdColuna,matriz));


}

float CalcMedia(int linha, int qtdColuna, int mat[100][100])
{
    float media = 0;
    float somaIndices = 0;
    for(int x = 0; x < qtdColuna; x++)
    {
        media += mat[linha][x] + linha + x + 1;
        somaIndices += x;
    }
    return (media/somaIndices);
}


