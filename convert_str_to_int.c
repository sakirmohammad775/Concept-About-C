#include<stdio.h>
int main(){
    char str[100];
    int n;
    scanf("%d",&n);
    scanf("%s",str);

int num=0;
for(int i=0;i<n;i++){
    int digit=str[i]-'0';
    num=num*10+digit;
    
}
printf("%d",num);

    return 0;
}