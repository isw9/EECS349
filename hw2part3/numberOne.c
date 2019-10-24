#include <stdio.h>
int main(void){
    int param1 = 3;
    int param2 = 5;
    int param3 = 0;

    //plus zero because param1 is positive
    param3 = param1 * param2 - ((param1 + (0)) / 2);

    printf("%d", param3);
    return 0;
}
