#include <stdio.h>

int is_evenly_divisible(int numerator, int denominator){
    if(numerator % denominator == 0){
        return 1;
    }
    return 0;
}



int main(void){
    int year;
    printf("Enter a Year pls");
    scanf("%d", &year);

    if(!is_evenly_divisible(year, 4)){
        return printf("is not Leap year");
    }
    if(is_evenly_divisible(year, 100)){
        return is_evenly_divisible(year, 400);
    }
     printf("is Leap year");
}