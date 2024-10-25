/*
You have already solved a problem where you had to find minimum and maximum value among 3 integer numbers.

Now you will be given 3 strings you have to find lexicographically minimum and maximum string among them.

Input Format

The first line will contain 3 strings, S1, S2, S3 containing only lowercase letters.

Constraints

1 <= |S1|, |S2|, |S3| <= 1000

Output Format

In the first line print the lexicographically minimum string.

In the second line print the lexicographically maximum string.

Sample Input 0

abc def ghi
Sample Output 0

abc
ghi
*/

#include <stdio.h>
#include <string.h>

int main() {
    char S1[1001], S2[1001], S3[1001];

    scanf("%s %s %s", S1, S2, S3);

    char *minimumString = S1;
    char maximumString = S1;

    
    if (strcmp(S2, minimumString) < 0) {
        minimumString = S2;
    }
    if (strcmp(S3, minimumString) < 0) {
        minimumString = S3;
    }

    
    if (strcmp(S2, maximumString) > 0) {
        maximumString = S2;
    }
    if (strcmp(S3, maximumString) > 0) {
        maximumString = S3;
    }

    // Print the minimum and maximum strings
    printf("%s\n", minimumString);
    printf("%s\n", maximumString);

    return 0;
}

