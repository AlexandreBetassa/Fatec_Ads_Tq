#include <stdio.h>
int main()
{
	float Area = 0.0,pf = 0.0,CustoFinal = 0.0;
	char nome[500];
    int tipo;
    printf("Informe o nome do fazendeiro: ");
    scanf("%s", nome);
    printf("Informe o tipo de Pulverizacao:\n1 - Pulverizacao contra erva daninhas. R$ 700,00 por acre\n2 - Pulverizacao contra gafanhotos. R$ 1200,00 por acre\n3 - Pulverizacao contra broca. R$ 1600,00 por acre;\n4 - Pulverizacao  contra tudo acima R$ 2300,00 por acre.\nResposta: ");
    scanf("%d", &tipo);
    printf("Informe a area a ser pulverizada: ");
    scanf("%f", &Area);
	if(tipo==1)
	{
        if( Area >= 300){
		    pf=Area*700;
		    CustoFinal = pf-(pf*0.075);
        } else {
            pf= 700 * Area;
		    CustoFinal = pf;
        }
	}
    else if(tipo == 2)
	{
        if( Area >= 300){
		    pf= Area * 1200;
		    CustoFinal = pf -(pf*0.075);
        } else {
            pf= 1200 * Area;
		    CustoFinal = pf;
        }
	}
    else if(tipo == 3)
	{
        if(Area >= 300){
		    pf= Area * 1600;
		    CustoFinal= pf -(pf*0.075);
        } else {
            pf= 1600 * Area;
		    CustoFinal = pf;
        }
	}
    else if(tipo == 4)
	{
        if(Area >= 300){
		    pf= Area * 2300;
		    CustoFinal = pf - (pf*0.075);
        } else {
            pf= 2300 * Area;
		    CustoFinal= pf;
        }
	}
	if(CustoFinal >= 300000)
	{
		CustoFinal= CustoFinal - (CustoFinal*0.13);
	}
    printf("\nFazendeiro: %s\nCusto da pulverizacao: %.2f", nome, CustoFinal);

    return 0;
 }