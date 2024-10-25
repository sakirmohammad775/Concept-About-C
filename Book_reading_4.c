#include <stdio.h>
int main()
{
    int N;
    long long T;
    scanf("%d", &N);
    scanf("%lld", &T);
    int arr[N];
    int booksReadCount =0;
    long long total = 0;

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <= N; i++)
    {
        total += arr[i];
        booksReadCount++;
        if (total+arr[i] >= T)
        {
            break;
        }
    }
    printf("%d",booksReadCount);

    return 0;
}

