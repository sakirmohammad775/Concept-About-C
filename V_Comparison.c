#include <stdio.h>
int main()
{
    int A, B;
    char s;
    scanf("%d %c %d", &A, &s, &B);

    if (s == '>')
    {
        if (A > B)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else if (s == '<')
    {
        if (A < B)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else if (s == '=')

    {
        if (A = B)
        {

            printf("Right\n");
        }
        else{
            printf("Wrong\n");  
        }
    }
    return 0;
}