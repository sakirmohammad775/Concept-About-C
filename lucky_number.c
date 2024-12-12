#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // find the minimum number
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    // count the minimum number
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            count++;
        }
    }
    // check if the count is even or odd

    if (count % 2 == 0)
    {

        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }
    return 0;
}