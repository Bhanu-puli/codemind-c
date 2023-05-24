#include <stdio.h>
int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    return reversedNum;
}
int square(int num) {
    return num * num;
}
int isAdamNumber(int num) {
    int originalSquare = square(num);
    int reversedNum = reverseNumber(num);
    int reversedSquare = square(reversedNum);
    int reversedSquareReversed = reverseNumber(reversedSquare);
    if (originalSquare == reversedSquareReversed) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int num;
    scanf("%d", &num);
    int result = isAdamNumber(num);
    if (result) {
        printf("True
");
    } else {
        printf("False
");
    }
    return 0;
}