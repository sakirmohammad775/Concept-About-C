#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        long long m;
        int a, b, c;
        scanf("%lld %d%d%d", &m, &a, &b, &c);

        long long multi = a * b * c;
        if (multi == 0)
        {
            if (m == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
        }
        else
        {
            long long res = m % multi;
            if (res == 0)
            {
                printf("%lld\n", m / multi);
            }
            else
            {
                printf("-1\n");
            }
        }
    }
    return 0;
}