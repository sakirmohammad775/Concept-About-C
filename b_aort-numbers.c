#include<stdio.h>
int main(){

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b>c ){
        printf("%d",a);
        printf(" %d",b);
        printf(" %d",c);
    }
    else if (b>a &&  b>c){
        printf("%d",b);
        printf(" %d",c);
        printf(" %d",a);
    }
    else{
        printf("%d",c);
        printf(" %d",b);
        printf(" %d",a);
    }
    
    return 0;
}