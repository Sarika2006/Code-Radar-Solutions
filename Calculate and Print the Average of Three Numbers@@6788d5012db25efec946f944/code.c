#include <stdio.h>
int main() {
    int x,y,z,avg;
    scanf("%d %d %d",&x, &y, &z);
    avg = x+y+x/3;
    printf("Average: %d",avg);
    return 0;
}