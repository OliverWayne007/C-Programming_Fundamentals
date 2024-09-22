#include <stdio.h>

int main() {
    // Calculate using default operator precedence
    int defaultResult = (5 + 3 * 2) / (4 - 2);
    printf("Result with default precedence: %d\n", defaultResult);

    // Modify the expression to change the operator precedence
    int changedResult = ((5 + 3) * 2) / (4 - 2);
    printf("Result with changed precedence: %d\n", changedResult);

    return 0;
}
