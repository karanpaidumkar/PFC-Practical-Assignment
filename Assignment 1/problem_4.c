#include <stdio.h>

int main() {
    float a;
    scanf("%f", &a);

    printf("Welcome to the Floating Fortune Teller\n\n");
    printf("%%f      -> %f\n", a);
    printf("%%.1f    -> %.1f\n", a);
    printf("%%.2f    -> %.2f\n", a);
    printf("%%.3f    -> %.3f\n", a);
    printf("%%6.2f   -> %6.2f\n", a);
    printf("%%8.3f   -> %8.3f\n", a);
    printf("%%0.2f   -> %0.2f\n", a);
    printf("%%10.4f  -> %10.4f\n", a);
    printf("%%e      -> %e\n", a);
    printf("%%E      -> %E\n", a);
    printf("%%g      -> %g\n", a);
    printf("%%G      -> %G\n", a);

    printf("\nEach format changes how the float is displayed — precision, padding, or notation style!\n");
     printf("\t\t Karan Paidumkar ERPID--RU-25-10650\n");
    return 0;
}

