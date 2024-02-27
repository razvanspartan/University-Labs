#include <stdio.h>

int main(){
    int number;
    unsigned short count1s = 0;
    scanf("%d", &number);
    while (number){
        count1s += number % 2;
        number /= 2;
    }
    printf("%d\n", count1s);
}