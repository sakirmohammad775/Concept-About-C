#include <stdio.h>
#include <math.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    int flag = 1;

    if(n!=m){
        printf("NO");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            scanf("%d", &a[i][j]);
            if(i==j || i+j==n-1){
                if(a[i][j]!=1){
                        flag = 0;
                    }

            }
            else{
                    if(a[i][j]!=0){
                    flag = 0;
                }
            }
        }
    }
    
    if(flag){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}