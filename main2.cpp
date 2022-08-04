//
// Created by X on 6/4/2022.
//

#include "main2.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(int argc, char* argv[]) {
    // declarations
    int i, n;
    double *a, *b, sum, rtime;
    clock_t stime, ftime;
    // ensure that an argument was passed in
    if (argc < 2) {
        printf("Error: requires 1 argument\n");
        return 1;
    }
    // set n as the input arg, ensure positive
    n = atoi(argv[1]);
    if (n < 1) {
        printf("Error: arg must be >0\n");
        return 1;
    }
    // allocate the arrays
    a = new double[n];
    b = new double[n];
    // initialize the array values
    for (i=0; i<n; i++) {
        a[i] = (0.001 * (i + 1.0)) / n;
        b[i] = (0.001 * (n - i - 1.0)) / n;
    }
    // compute dot-product
    stime = clock();
    sum = 0.0;
    for (i=0; i<n; i++) sum += a[i]*b[i];
    ftime = clock();
    rtime = ((double) (ftime – stime))
            /CLOCKS_PER_SEC;
    // output computed value and runtime
    printf(" vector length = %i\n",n);
    printf(" dot-product = %.16e\n",sum);
    printf(" run time = %.2e\n",rtime);
    // delete vectors
    delete[] a;
    delete[] b;
    return 0;
} // end main