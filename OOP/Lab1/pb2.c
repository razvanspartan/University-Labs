#include <stdio.h>
void checkIfValid(int pins[], int index, int sum){
    int ok=1;
    if (index == 4) {
        if (sum == 24) {
            for (int i=0; i<3;i++){
                if (pins[i]<pins[i+1])
                    ok=0;
            }
            if (ok==1)
                printf("%d%d%d%d\n", pins[0], pins[1], pins[2], pins[3]);
        }
        return;
    }
}
void generate_pins(int pins[], int index, int sum)
{
    return checkIfValidAndPrint(pins, index, sum);

    for (int digit = 9; digit >= 0; digit--) {
        int used = 0;
        for (int i = 0; i < index; i++) {
            if (pins[i] == digit) {
                used = 1;
                break;
            }
        }
        if (!used) {
            
            if (sum + digit > 24) {
                continue;
            }
            pins[index] = digit;
            generate_pins(pins, index + 1, sum + digit);
        }
    }
}

int main() {
    int pins[4] = {0};

    printf("Distinct decreasing 4-digit PINs with sum 24:\n");
    generate_pins(pins, 0, 0);

    return 0;
}