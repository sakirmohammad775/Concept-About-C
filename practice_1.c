#include <stdio.h>
int a[100000], b[100000];
int main()
{
    int length1 = 0, length2 = 0;
    scanf("%d", &length1);

    for (int i = 0; i < length1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Before Copy\n");
    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");

    printf("After Copy\n");

    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }
     printf("\n");

    for (int i = 0; i < length1; i++)
    {
        b[i]=a[i];
        printf("%d ", b[i]);
        b[2]=100;//for update
        printf("\n%d ",b[i]);
    }

    return 0;
}