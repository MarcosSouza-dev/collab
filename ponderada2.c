#include <stdio.h>
// media ponderada de 3 notas //
int main() {

    double A, B, C, media;

    // leitura de notas // 

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    // média ponderada das notas//
    media = (A * 2 + B * 3 + C * 5) / 10.0;

    printf(" MEDIA = %.1lf\n", media);


    return 0;

}