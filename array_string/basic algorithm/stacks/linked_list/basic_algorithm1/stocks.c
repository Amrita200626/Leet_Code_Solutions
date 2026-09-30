#include <stdio.h>
int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 0) return 0;
    
    int minPrice = prices[0];
    int maxProfit = 0;
    
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i]; // Update minimum price so far
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice; // Update maximum profit
        }
    }
    
    return maxProfit;
}
#include <stdio.h>

int main() {

    int prices1[] = {7, 1, 5, 3, 6, 4};

    printf("Test Case 1: %d\n",
           maxProfit(prices1, 6));


    int prices2[] = {7, 6, 4, 3, 1};

    printf("Test Case 2: %d\n",
           maxProfit(prices2, 5));


    return 0;
}