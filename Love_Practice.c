#include <stdio.h>

int main() {
    // Declare variables
    int intValue;
    long long longValue;  // Ensure we use long long for large integers
    double doubleValue;
    char charValue;

    // Read all input values in one line
    // Make sure to consume the whitespace before reading the character
    scanf("%d %lld %lf %c", &intValue, &longValue, &doubleValue, &charValue);

    // Print the output in one line
    printf("%d \n%lld \n%.2f \n%c\n", intValue, longValue, doubleValue, charValue);

    return 0;
}
/*
input 100
1234567891234567
23.5675
A
output
100 
1234567891234567 
23.57 
A
*/