#include <stdio.h>

int main() {
    // Define two large integers using the unsigned int data type
    unsigned int largeInt1 = 4294967294; // Maximum value of unsigned int is 4294967295
    unsigned int largeInt2 = 2;

    // Display the large integers
    printf("Large Integer 1: %u\n", largeInt1);
    printf("Large Integer 2: %u\n", largeInt2);

    // Show result before overflow (Note: unsigned int will automatically wrap around)
    unsigned long long result = (unsigned long long)largeInt1 + largeInt2;
    printf("Result before overflow (using larger data type to prevent overflow): %llu\n", result);

    // Perform the addition with unsigned int to cause overflow
    unsigned int overflowResult = largeInt1 + largeInt2;
    printf("Result after overflow: %u\n", overflowResult);

    return 0;
}
