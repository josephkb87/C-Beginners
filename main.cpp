#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
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