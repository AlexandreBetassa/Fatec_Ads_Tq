#include<stdio.h>
int main(){
    int resposta, continuaCadastro = 0, numCadastros = 0, consumidores[99999][4], maiorConsumoIndustria = 0, totalConsumoResidencial = 0;
    int numCasas = 0, numIndustrias = 0, numComercios = 0, maiorConsumo = 0, segundoMaiorConsumo = 0;
    float mediaConsumo = 0.0;
    while(continuaCadastro != -1){
        printf("\nInsira o preco do kWh consumido: ");
        scanf("%d", &consumidores[numCadastros][0]);
        consumidores[numCadastros][1] = numCadastros;
        printf("Insira a quantidade de kWh consumidos no mes: ");
        scanf("%d", &consumidores[numCadastros][2]);
        printf("Insira seu tipo de consumo:\n1 - Residencial\n2 - Industrial\n3 - Comercial\nResposta: ");
        scanf("%d", &consumidores[numCadastros][3]);
        numCadastros++;
        printf("\nDeseja continuar cadastrando?\n1 - SIM\n2 - NAO\nResposta: ");
        scanf("%d", &resposta);
        if(resposta == 2){
            continuaCadastro = -1;
        } else {
            continuaCadastro++;
        }
    }
    printf("\nValor a ser pago por cada consumidor: ");
    for(int i = 0; i < numCadastros; i++){
        printf("\nCodigo: %d\tValor: %d", consumidores[i][1], consumidores[i][0] * consumidores[i][2]);
        if(consumidores[i][3] == 1){ // CASA
            totalConsumoResidencial += consumidores[i][2];
            numCasas++;
        }
        else if(consumidores[i][3] == 2){ // INDUSTRIA
            if(consumidores[i][2] > maiorConsumoIndustria){
                maiorConsumoIndustria = consumidores[i][2];
            }
            numIndustrias++;
        }
        else{ // COMERCIO
            numComercios++;
        }
        mediaConsumo += consumidores[i][2];
        if(consumidores[i][2] > maiorConsumo){
            if(maiorConsumo > segundoMaiorConsumo){
                segundoMaiorConsumo = maiorConsumo;
            }
            maiorConsumo = consumidores[i][2];
        }
        if( consumidores[i][2] > segundoMaiorConsumo && consumidores[i][2] != maiorConsumo ){
            segundoMaiorConsumo = consumidores[i][2];
        }
    }
    mediaConsumo = mediaConsumo / numCadastros;
    printf("\nO maior consumo verificado pela industria foi: %d", maiorConsumoIndustria);
    printf("\nTotal consumido pelas residencias: %d", totalConsumoResidencial);
    printf("\nA media geral de consumo foi: %0.2f", mediaConsumo);
    printf("\nPorcentagem consumida pelas residencias: %.2f", (((float)numCasas / (float)numCadastros) * 100.0));
    printf("\nPorcentagem consumida pelas industrias: %.2f", (((float)numIndustrias / (float)numCadastros)) * 100);
    printf("\nPorcentagem consumida pelos comercios: %.2f", (((float)numComercios / (float)numCadastros)) * 100);
    printf("\nSegundo maior consumo verificado: %d", segundoMaiorConsumo);
    return 0;
}