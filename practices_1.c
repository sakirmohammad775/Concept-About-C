#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
        sum += a[i];
    }
    printf("\nSum:%d\n", sum);
    double avg = (double)sum / n;
    printf("Average: %lf\n", avg);
    // min max
    int min = a[0], max = a[0];
    for (int i = 0; i < n; i++){
        if(a[i]<min){
            min = a[i];
        }
        if(a[i]>max){
            max = a[i];
        }
    }
    printf("Minimum: %d\nMaximum: %d\n", min, max);
    return 0;
}