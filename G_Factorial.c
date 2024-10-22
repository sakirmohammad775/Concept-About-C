
#include <stdio.h>
int main()
{
    int cn; // case number input
    scanf("%d", &cn);
    for (int cs = 0; cs < cn; cs++) // for loop ,How many numbers in the n;
    {
        int n;
        scanf("%d", &n);

        long long fact = 1;
        for (int i = 1; i <= n; i++) // for loop for factorial

        {
            fact *= i;
        }
        printf("%lld\n", fact);
    }

    return 0;
}
//0!=1
/*sample input for test
3
5
3
7
0
0
*/