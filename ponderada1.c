#include <stdio.h>

int main() {

    double A, B, media;

    // leitura de notas // 

    scanf("%lf", &A);
    scanf("%lf", &B);
    

    // média ponderada das notas//
    media = (A * 3.5 + B * 7.5 ) / 11.0;

    printf(" MEDIA = %.5lf\n", media);


    return 0;

}