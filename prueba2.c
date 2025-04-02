/* ejemplo 4.- se realizan conversiones de tipos implícitas y
explícitas */
#include <stdio.h>
int main () {
    printf(" %f \n", va_float); /* imprime 33.241*/
    printf(" %.1f \n", va_float); /* imprime 33.2*/
    printf(" %.4f \n", va_float); /* imprime 33.2410*/
    printf(" %1.4e \n", va_float); /* imprime 3.3241e+01*/
    printf(" %d \n", va_int); /* imprime 805*/
    printf(" %10f\n", va_float); /* imprime 33.241*/
    return 0;
    }