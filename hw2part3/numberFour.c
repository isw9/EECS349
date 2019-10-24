#include <stdio.h>
int main(void){
    int numbers[3] = {7,100,0};

    while (numbers[2] < numbers[1]) {
        numbers[2] = numbers[0];
        numbers[0] = numbers[0] + 1;
    }


    int result = 0;

    //call Z5proc1Piii with two integers from numbers
    // store this result in result
    // result = Z5prociii(numbers[0], numbers[1])
    printf("%d",result);
    return 0;


}
