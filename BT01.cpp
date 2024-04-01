#include <stdio.h>

void printMultiplesOfSeven() {
    int i;
    for(i = 10; i < 100; i++) {
        if(i % 7 == 0) {
            printf("%d\n", i);
        }
    }
}

int main() {
    printMultiplesOfSeven();
    return 0;
}
