#include <stdio.h>
int main() {
    unsigned short year;
    unsigned char name[20];
    printf("Enter your age:");
    scanf("%hu", &year);
    printf("Enter your name:");
    scanf("%s", name);
    printf("Your name is %s and you are %hu years old\n", name, year);
}
