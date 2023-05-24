#include <stdio.h>
int is_perfect_square(int n) {
    int sqrt = 0;
    while (sqrt * sqrt < n) {
        sqrt++;
    }
    if (sqrt * sqrt == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    scanf("%d", &num);
    int result = is_perfect_square(num);
    if (result) {
        printf("True
");
    } else {
        printf("False
");
    }
    return 0;
}