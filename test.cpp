#include <stdio.h>
#include <math.h>

int main(){
    double y = 0.5f;
    double x = -1.0f;

    long vy = round(y * 0.5f * 12000);
    long va = round(x * 0.5f * 12000);

    printf("fwd: %f, spin: %f\n", y, x);
    printf("vy: %d, va: %d\n", vy, va);
    printf("left: %d, right: %d\n", vy + va, vy - va);
    return 0;
}
