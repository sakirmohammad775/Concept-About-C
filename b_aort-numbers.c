#include<stdio.h>
int main(){

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c && b>c){
        printf("%d",a);
        printf(" %d",b);
        printf(" %d",c);
    }
    return 0;
}