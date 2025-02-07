#include <stdio.h>

int main() {
    int num, i;

    
    printf("Enter a number: ");
    scanf("%d", &num);
if (num < 0) {
        printf("%d is not a perfect square.\n", num);
        return 0;
    }

    
    for (i = 0; i * i <= num; i++) {
        if (i * i == num) {
            printf("%d is a perfect square.\n", num);
            return 0;
        }
    }

    printf("%d is not a perfect square.\n", num);
    return 0;
}
