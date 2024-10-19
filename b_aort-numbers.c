#include<stdio.h>
int main(){

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b>c ){
        printf("%d\n %d\n %d\n",a,b,c);
        
    }
    else if (b>a &&  b>c){
       printf("%d\n%d\n%d\n",b,c,a);
        
    }
   
    
    return 0;
}