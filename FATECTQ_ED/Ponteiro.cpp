#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void atribuirValores(int vetor[], int qtd);
void imprimir(int vetor[], int qtd);
void ordenarValores(int vetor[], int qtd);

int aux, qtd;
int main()
{
//ponteiro = (tipo *)malloc (sizeof(tipo));

    printf("Informe quantos valores você deseja ordenar: ");
    scanf("%d", &qtd);
    int array[qtd];
    int len = sizeof(array)/sizeof(array[0]);
    int *ponteiroArray = array;

    atribuirValores(ponteiroArray, len);
    printf("### VETOR ORIGINAL ###\n");
    imprimir(ponteiroArray, len);
    ordenarValores(ponteiroArray, len);
    printf("\n### VETOR ORDENADO ###\n");
    imprimir(ponteiroArray, len);

    getchar();
    return 0;
}

void imprimir(int *vetor, int qtd)
{

    for(int i = 0; i < qtd; i++)
    {
        printf("%d |", vetor[i]);
    }
}

void atribuirValores(int *vetor, int qtd)
{
    for(int i = 0; i < qtd; i++)
    {
        vetor[i] = rand() % 100;
    }
}

void ordenarValores(int *vetor, int qtd)
{
    int aux;
    for(int i = 0; i < qtd; i++)
    {
        for(int x = i; x <= qtd; x++){
            if(vetor[i] > vetor[x]){
                aux = vetor[i];
                vetor[i] = vetor[x];
                vetor[x] = aux;
            }
        }
    }
}



