#include <stdio.h>
int main(){
    char x[20];
    int y;
    char z[30];
    scanf("%s %d %s",&x,&y,&z);
    printf("Name: %s\n", x);
    printf("Age: %d\n", y);
    printf("Hobby: %s", z);
    return 0;
}