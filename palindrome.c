#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }
    int is_palindrome=1;
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
            is_palindrome=0;
            break;
        }
    }
    if(is_palindrome){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}