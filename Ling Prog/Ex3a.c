#include <stdio.h>
#include <math.h>

int main() {
    int i, n, a , b, d;
    float sinal, s;

    printf("\nEntre com numero de termos: ");
    scanf("%d",&n);

    i = 1;
    a = 1;
    b = 20;
    sinal = -1.0;
    s = 0;
    d= 1 ;

    while(i <= n) {
        printf("\nO termo e: %.2f = %.1f * %d / %d ; ",s, sinal, a, b);
        s = s + sinal * a/b;
        b = a + b;
        a = (i + 1) * (i+ 1) * (i + 1) * (i+ 1);
        if(i % 3 == 0) {
            sinal = - sinal;
        }
        i++;
    }

    printf("\nA soma dos %d termos = %.2f", n, s);
    return 0;
}
