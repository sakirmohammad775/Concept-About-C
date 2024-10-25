#include<stdio.h>
int main(){
    int N,X,Y;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
        printf("%d",arr[i]);
    }
    return 0;
}
