#include<stdio.h>
int main(){
    //5 + 10 = 15 inputOnly one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 105 ≤ C ≤ 105) and S can be ('+', '-', '*') without the quotation.

    int a, b, c;
    char s;
    scanf("%d %c %d %d",&a,&s,&b ,&c);
    if(s=='+') {
        printf("%d",a+b);
        }
    printf("%d",&a);
    return 0;
}