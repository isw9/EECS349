#include <stdio.h>
int main(void){
    int numbers[9] = {12,15,221,3,432,54,16,67,0,0};

    int i = 0;
    int maxValueLocation = 8;
    for (i = 0; i < 8; i++) {

        if (numbers[i] > numbers[maxValueLocation]) {
            numbers[maxValueLocation] = numbers[i];
        }
        else {
            // nothing happens
        }
    }

    printf("%d\n", numbers[maxValueLocation]);

    return 0;
}
