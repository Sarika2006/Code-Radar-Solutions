#include <stdio.h>
int main() {
    double x,y,z,avg;
    scanf("%lf %lf %lf",&x, &y, &z);
    avg = (x+y+z)/3;
    printf("Average: %.2lf",avg);
    return 0;
}