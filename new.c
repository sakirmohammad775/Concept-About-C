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
    int x;
    scanf("%d", &x);
    int position = 0;
    for (int i = 0; i < n; i++)
    //Print the position of X in the first time you find it. If it doesn't exist print -1.
    {
    
        if (a[i] == x){
            position = i;
            break;
        }
        else{
            position = -1;
        }
        
    }
    printf("%d\n", position);
    return 0;
}