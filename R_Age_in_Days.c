#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int year=x/365;
    int remaining=x%365;
    int month=remaining/30;
    int day=remaining%30;
    printf("%d years\n%d months\n%d days\n", year, month, day);
}