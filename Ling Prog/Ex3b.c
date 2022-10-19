#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,m,i,n;
    float s, sinal;

    printf("\n Entre com o numero de termos: ");
    scanf("%d", &n);

    i=1;
    a=1;
    b=6;
    c=4;
    d=5;
    m=4;
    s=0;
    sinal=1.0;

    printf("\n s=");
    while (i<=n) {
        s= s+sinal*a/b;

    if (sinal>0)
    printf ("\n +%d/%d", a,b);
     else printf("\n -%d/%d", a,b);

     a=m*m*m;
     b=b*c*d;
     m=m+3;
     c=c+2;
     d=d+2;

     if(i%2==0) sinal=-sinal;
        i++;
}

printf ("\n A soma = %0.2f", s);

}