#include "utils.h"
#include <stdio.h>

//******************************************************************************

void swap_ptr(double** a, double** b){

    double* temp;

    temp = *b;
    *b = *a;
    *a = temp;
}

//******************************************************************************