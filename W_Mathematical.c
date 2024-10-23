#include <stdio.h>
int main()
{
    int A, B, C;
    char S, Q;
    scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);
    

    if (S == '+') {
        if (A + B == C) {
            printf("Yes");
        } else {
            printf("%d", A + B);
        }
    }
    else if (S == '-') {
        if (A - B == C) {
            printf("Yes");
        } else {
            printf("%d", A - B);
        }
    }
    else if (S == '*')
    {
        
        if(A*B== C){
            printf("Yes");
        
        }
        else {
            printf("%d",A*B);

        }
        
    }
    return 0;
}


/*
#include <stdio.h>

        
        if(A*B== C){
            printf("Yes");
        
        }
        else {
            printf("%d",A*B);

    
}
*/
/*
git add .
git commit -m "add new topic"
git push origin main
*/