#include <stdio.h>

int main() {
    float price, discount = 0.0, final_price;

 
    printf("Enter the total price of the purchase: ");
    scanf("%f", &price);

    if (price >= 1000) {
        discount = 0.2; 
    } else if (price >= 500) {
        discount = 0.1; 
    } else if (price >= 200) {
        discount = 0.05; 
    } else {
        discount = 0;
    }

    final_price = price - (price * discount);
    printf("Original Price: %.2f\n", price);
    printf("Discount: %.2f%%\n", discount * 100);
    printf("Final Price after Discount: %.2f\n", final_price);

    return 0;
}

