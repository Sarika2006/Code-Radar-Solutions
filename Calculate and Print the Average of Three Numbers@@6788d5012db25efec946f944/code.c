#include <stdio.h>
int main() {
    int x,y,z,avg;
    scanf("%lf %lf %lf",&x, &y, &z);
    avg = x+y+x/3;
    printf("Average: %.2lf",avg);
    return 0;
}