#include <stdio.h>
int main(void){

    int i = 100;
    for (i = 100; i < 1000; i++) {
        int param1 = 1374389535;
        param1 = param1 * param1;
        param1 = param1 / 32;

        if ( i > 0) {
            param1 = param1 - 0;
        }
        else {
            param1 = param1 - 1;
        }

        param1 = param1 * -100;

        int param2 = 1717986919;

        param2 = param2 / 4;

        param2 = param2 * 100;

        param2 = param2 / 4;

        param1 = param1 * param1 * param1;
        param2 = param2 * param2 * param2;
        int param3 = i * i * i;

        int sum = param1 + param2 + param3;

        if (i == sum) {
            printf("%d", i);
        }
    }

    return 0;
}
