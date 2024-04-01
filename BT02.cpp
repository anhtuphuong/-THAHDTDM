#include <stdio.h>
#include <math.h>

// Hàm kiểm tra số chính phương
int isPerfectSquare(int number) {
    int root = sqrt(number);
    return root * root == number;
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void printPerfectSquares(int n) {
    int count = 0;
    for(int i = n - 1; i > 0; i--) {
        if(isPerfectSquare(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nCó %d số chính phương nhỏ hơn %d\n", count, n);
}

int main() {
    int n;
    printf("Nhập số nguyên dương n: ");
    scanf("%d", &n);
    printPerfectSquares(n);
    return 0;
}
