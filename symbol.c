#include <stdio.h>
int main()
{
    /*Input
Only one line containing a number N
 (2≤N≤103)
.

Output
Print all prime numbers between 1 and N
 (inclusive) separated by a space.*/
    int x;
    scanf("%d", &x);
    for(int i = 0; i <=x; i++){
        int flag = 0;
        for(int j = 2; j <= i/2; j++){
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0 && i > 1){
            printf("%d ", i);
        }
    }
    return 0;
}