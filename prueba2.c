/* ejemplo 4.- se realizan conversiones de tipos implícitas y
explícitas */
#include <stdio.h>
int main () {
    printf(" %f \n", 1); /* imprime 33.241*/
    printf(" %.1f \n", 2); /* imprime 33.2*/
    printf(" %.4f \n", 3); /* imprime 33.2410 otro cambio al arciasdfjjaflkasklfjl*/ 
    printf(" %1.4e \n", 4); /* imprime 3.3241e+01*/
    printf(" %d \n", 5); /* imprime 805*/
    printf(" %10f\n", 5); /* imprime 33.241*/
    return 0;
    }